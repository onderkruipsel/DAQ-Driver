#include "ProtobufComparer.h"

ProtobufComparer::ProtobufComparer()
{
	m_messageDifferencer.ReportDifferencesTo(m_differenceReporter);
}

ProtobufComparer::~ProtobufComparer()
{
	delete m_differenceReporter;
}

bool ProtobufComparer::compareProtobufs(ProtobufConfiguration proto1, ProtobufConfiguration proto2)
{
	return m_messageDifferencer.Compare(proto1, proto2);
}

bool ProtobufComparer::compareAgainstPrevProtobuf(ProtobufConfiguration protobuf)
{
	return m_messageDifferencer.Compare(protobuf, m_savedProtobuf);
}

void ProtobufComparer::addIgnoreField(std::string Field)
{
	m_messageDifferencer.IgnoreField(ProtobufConfiguration::GetDescriptor()->FindFieldByName(Field));
}
