// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.NameInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200045C")]
internal sealed class NameInfo
{
	[Token(Token = "0x4001216")]
	[FieldOffset(Offset = "0x10")]
	internal string NIFullName;

	[Token(Token = "0x4001217")]
	[FieldOffset(Offset = "0x18")]
	internal long NIobjectId;

	[Token(Token = "0x4001218")]
	[FieldOffset(Offset = "0x20")]
	internal long NIassemId;

	[Token(Token = "0x4001219")]
	[FieldOffset(Offset = "0x28")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE NIprimitiveTypeEnum;

	[Token(Token = "0x400121A")]
	[FieldOffset(Offset = "0x30")]
	internal Type NItype;

	[Token(Token = "0x400121B")]
	[FieldOffset(Offset = "0x38")]
	internal bool NIisSealed;

	[Token(Token = "0x400121C")]
	[FieldOffset(Offset = "0x39")]
	internal bool NIisArray;

	[Token(Token = "0x400121D")]
	[FieldOffset(Offset = "0x3A")]
	internal bool NIisArrayItem;

	[Token(Token = "0x400121E")]
	[FieldOffset(Offset = "0x3B")]
	internal bool NItransmitTypeOnObject;

	[Token(Token = "0x400121F")]
	[FieldOffset(Offset = "0x3C")]
	internal bool NItransmitTypeOnMember;

	[Token(Token = "0x4001220")]
	[FieldOffset(Offset = "0x3D")]
	internal bool NIisParentTypeOnObject;

	[Token(Token = "0x4001221")]
	[FieldOffset(Offset = "0x40")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE NIarrayEnum;

	[Token(Token = "0x4001222")]
	[FieldOffset(Offset = "0x44")]
	private bool NIsealedStatusChecked;

	[Token(Token = "0x1700045D")]
	public bool IsSealed
	{
		[Token(Token = "0x6002212")]
		[Address(RVA = "0x1A2E080", Offset = "0x1A2C680", VA = "0x181A2E080")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700045E")]
	public string NIname
	{
		[Token(Token = "0x6002213")]
		[Address(RVA = "0x1A2E0C0", Offset = "0x1A2C6C0", VA = "0x181A2E0C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002214")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x6002210")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal NameInfo()
	{
	}

	[Token(Token = "0x6002211")]
	[Address(RVA = "0x1A2E020", Offset = "0x1A2C620", VA = "0x181A2E020")]
	internal void Init()
	{
	}
}
