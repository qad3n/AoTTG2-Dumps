// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.DoubleLinkAxis
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using MS.Internal.Xml.XPath;

namespace System.Xml.Schema;

[Token(Token = "0x2000160")]
internal class DoubleLinkAxis : Axis
{
	[Token(Token = "0x4000726")]
	[FieldOffset(Offset = "0x40")]
	internal Axis next;

	[Token(Token = "0x170003EA")]
	internal Axis Next
	{
		[Token(Token = "0x6000F37")]
		[Address(RVA = "0x613DAA0", Offset = "0x613CAA0", VA = "0x613DAA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F38")]
		[Address(RVA = "0x613DAB0", Offset = "0x613CAB0", VA = "0x613DAB0")]
		set
		{
		}
	}

	[Token(Token = "0x6000F39")]
	[Address(RVA = "0x613DAC0", Offset = "0x613CAC0", VA = "0x613DAC0")]
	internal DoubleLinkAxis(Axis axis, DoubleLinkAxis inputaxis)
	{
	}

	[Token(Token = "0x6000F3A")]
	[Address(RVA = "0x613DB50", Offset = "0x613CB50", VA = "0x613DB50")]
	internal static DoubleLinkAxis ConvertTree(Axis axis)
	{
		return null;
	}
}
