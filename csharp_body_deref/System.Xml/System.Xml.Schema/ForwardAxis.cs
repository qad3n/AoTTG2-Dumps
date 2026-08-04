// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.ForwardAxis
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x483EDC0", Offset = "0x483EDC0", VA = "0x483EDC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EC")]
	internal DoubleLinkAxis TopNode
	{
		[Token(Token = "0x6000F3C")]
		[Address(RVA = "0x483EDD0", Offset = "0x483EDD0", VA = "0x483EDD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003ED")]
	internal bool IsAttribute
	{
		[Token(Token = "0x6000F3D")]
		[Address(RVA = "0x483EDE0", Offset = "0x483EDE0", VA = "0x483EDE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003EE")]
	internal bool IsDss
	{
		[Token(Token = "0x6000F3E")]
		[Address(RVA = "0x483EDF0", Offset = "0x483EDF0", VA = "0x483EDF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003EF")]
	internal bool IsSelfAxis
	{
		[Token(Token = "0x6000F3F")]
		[Address(RVA = "0x483EE00", Offset = "0x483EE00", VA = "0x483EE00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F40")]
	[Address(RVA = "0x483EE10", Offset = "0x483EE10", VA = "0x483EE10")]
	public ForwardAxis(DoubleLinkAxis axis, bool isdesorself)
	{
	}
}
