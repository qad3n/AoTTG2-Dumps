using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000161")]
internal class ForwardAxis
{
	[Token(Token = "0x4000727")]
	[FieldOffset(Offset = "0x10")]
	private DoubleLinkAxis _topNode;

	[Token(Token = "0x4000728")]
	[FieldOffset(Offset = "0x18")]
	private DoubleLinkAxis _rootNode;

	[Token(Token = "0x4000729")]
	[FieldOffset(Offset = "0x20")]
	private bool _isAttribute;

	[Token(Token = "0x400072A")]
	[FieldOffset(Offset = "0x21")]
	private bool _isDss;

	[Token(Token = "0x400072B")]
	[FieldOffset(Offset = "0x22")]
	private bool _isSelfAxis;

	[Token(Token = "0x170003EB")]
	internal DoubleLinkAxis RootNode
	{
		[Token(Token = "0x6000F3B")]
		[Address(RVA = "0x4501660", Offset = "0x4501660", VA = "0x4501660")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EC")]
	internal DoubleLinkAxis TopNode
	{
		[Token(Token = "0x6000F3C")]
		[Address(RVA = "0x4501670", Offset = "0x4501670", VA = "0x4501670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003ED")]
	internal bool IsAttribute
	{
		[Token(Token = "0x6000F3D")]
		[Address(RVA = "0x4501680", Offset = "0x4501680", VA = "0x4501680")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003EE")]
	internal bool IsDss
	{
		[Token(Token = "0x6000F3E")]
		[Address(RVA = "0x4501690", Offset = "0x4501690", VA = "0x4501690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003EF")]
	internal bool IsSelfAxis
	{
		[Token(Token = "0x6000F3F")]
		[Address(RVA = "0x45016A0", Offset = "0x45016A0", VA = "0x45016A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F40")]
	[Address(RVA = "0x45016B0", Offset = "0x45016B0", VA = "0x45016B0")]
	public ForwardAxis(DoubleLinkAxis axis, bool isdesorself)
	{
	}
}
