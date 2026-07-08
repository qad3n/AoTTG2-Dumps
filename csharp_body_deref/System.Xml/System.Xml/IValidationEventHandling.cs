using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000030")]
internal interface IValidationEventHandling
{
	[Token(Token = "0x17000042")]
	object EventHandler
	{
		[Token(Token = "0x6000178")]
		get;
	}

	[Token(Token = "0x6000179")]
	void SendEvent(Exception exception, XmlSeverityType severity);
}
