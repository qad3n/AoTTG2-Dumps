// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.IValidationEventHandling
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
