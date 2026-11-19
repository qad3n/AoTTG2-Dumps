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
		[Address(RVA = "0x613DC60", Offset = "0x613CC60", VA = "0x613DC60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EC")]
	internal DoubleLinkAxis TopNode
	{
		[Token(Token = "0x6000F3C")]
		[Address(RVA = "0x613DC70", Offset = "0x613CC70", VA = "0x613DC70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003ED")]
	internal bool IsAttribute
	{
		[Token(Token = "0x6000F3D")]
		[Address(RVA = "0x613DC80", Offset = "0x613CC80", VA = "0x613DC80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003EE")]
	internal bool IsDss
	{
		[Token(Token = "0x6000F3E")]
		[Address(RVA = "0x613DC90", Offset = "0x613CC90", VA = "0x613DC90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003EF")]
	internal bool IsSelfAxis
	{
		[Token(Token = "0x6000F3F")]
		[Address(RVA = "0x613DCA0", Offset = "0x613CCA0", VA = "0x613DCA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F40")]
	[Address(RVA = "0x613DCB0", Offset = "0x613CCB0", VA = "0x613DCB0")]
	public ForwardAxis(DoubleLinkAxis axis, bool isdesorself)
	{
	}
}
