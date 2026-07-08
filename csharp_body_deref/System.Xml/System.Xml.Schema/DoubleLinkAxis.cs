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
		[Address(RVA = "0x45014A0", Offset = "0x45014A0", VA = "0x45014A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F38")]
		[Address(RVA = "0x45014B0", Offset = "0x45014B0", VA = "0x45014B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000F39")]
	[Address(RVA = "0x45014C0", Offset = "0x45014C0", VA = "0x45014C0")]
	internal DoubleLinkAxis(Axis axis, DoubleLinkAxis inputaxis)
	{
	}

	[Token(Token = "0x6000F3A")]
	[Address(RVA = "0x4501550", Offset = "0x4501550", VA = "0x4501550")]
	internal static DoubleLinkAxis ConvertTree(Axis axis)
	{
		return null;
	}
}
