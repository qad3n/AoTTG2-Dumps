// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.NameInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000435")]
internal sealed class NameInfo
{
	[Token(Token = "0x4001176")]
	[FieldOffset(Offset = "0x10")]
	internal string NIFullName;

	[Token(Token = "0x4001177")]
	[FieldOffset(Offset = "0x18")]
	internal long NIobjectId;

	[Token(Token = "0x4001178")]
	[FieldOffset(Offset = "0x20")]
	internal long NIassemId;

	[Token(Token = "0x4001179")]
	[FieldOffset(Offset = "0x28")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE NIprimitiveTypeEnum;

	[Token(Token = "0x400117A")]
	[FieldOffset(Offset = "0x30")]
	internal Type NItype;

	[Token(Token = "0x400117B")]
	[FieldOffset(Offset = "0x38")]
	internal bool NIisSealed;

	[Token(Token = "0x400117C")]
	[FieldOffset(Offset = "0x39")]
	internal bool NIisArray;

	[Token(Token = "0x400117D")]
	[FieldOffset(Offset = "0x3A")]
	internal bool NIisArrayItem;

	[Token(Token = "0x400117E")]
	[FieldOffset(Offset = "0x3B")]
	internal bool NItransmitTypeOnObject;

	[Token(Token = "0x400117F")]
	[FieldOffset(Offset = "0x3C")]
	internal bool NItransmitTypeOnMember;

	[Token(Token = "0x4001180")]
	[FieldOffset(Offset = "0x3D")]
	internal bool NIisParentTypeOnObject;

	[Token(Token = "0x4001181")]
	[FieldOffset(Offset = "0x40")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE NIarrayEnum;

	[Token(Token = "0x4001182")]
	[FieldOffset(Offset = "0x44")]
	private bool NIsealedStatusChecked;

	[Token(Token = "0x1700045C")]
	public bool IsSealed
	{
		[Token(Token = "0x60021E8")]
		[Address(RVA = "0x53BBCF0", Offset = "0x53BACF0", VA = "0x53BBCF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700045D")]
	public string NIname
	{
		[Token(Token = "0x60021E9")]
		[Address(RVA = "0x53C3950", Offset = "0x53C2950", VA = "0x53C3950")]
		get
		{
			return null;
		}
		[Token(Token = "0x60021EA")]
		[Address(RVA = "0x53C39A0", Offset = "0x53C29A0", VA = "0x53C39A0")]
		set
		{
		}
	}

	[Token(Token = "0x60021E6")]
	[Address(RVA = "0x53BC170", Offset = "0x53BB170", VA = "0x53BC170")]
	internal NameInfo()
	{
	}

	[Token(Token = "0x60021E7")]
	[Address(RVA = "0x53BC0A0", Offset = "0x53BB0A0", VA = "0x53BC0A0")]
	internal void Init()
	{
	}
}
