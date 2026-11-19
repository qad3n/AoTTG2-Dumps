// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ToolboxItemAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000156")]
[AttributeUsage(AttributeTargets.All)]
public class ToolboxItemAttribute : Attribute
{
	[Token(Token = "0x40005C2")]
	[FieldOffset(Offset = "0x10")]
	private Type _toolboxItemType;

	[Token(Token = "0x40005C3")]
	[FieldOffset(Offset = "0x18")]
	private string _toolboxItemTypeName;

	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ToolboxItemAttribute Default;

	[Token(Token = "0x40005C5")]
	[FieldOffset(Offset = "0x8")]
	public static readonly ToolboxItemAttribute None;

	[Token(Token = "0x170001C9")]
	public Type ToolboxItemType
	{
		[Token(Token = "0x600087F")]
		[Address(RVA = "0x6231630", Offset = "0x6230630", VA = "0x6231630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CA")]
	public string ToolboxItemTypeName
	{
		[Token(Token = "0x6000880")]
		[Address(RVA = "0x62317D0", Offset = "0x62307D0", VA = "0x62317D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x6231480", Offset = "0x6230480", VA = "0x6231480", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x62314F0", Offset = "0x62304F0", VA = "0x62314F0")]
	public ToolboxItemAttribute(bool defaultType)
	{
	}

	[Token(Token = "0x600087D")]
	[Address(RVA = "0x6231550", Offset = "0x6230550", VA = "0x6231550")]
	public ToolboxItemAttribute(string toolboxItemTypeName)
	{
	}

	[Token(Token = "0x600087E")]
	[Address(RVA = "0x62315D0", Offset = "0x62305D0", VA = "0x62315D0")]
	public ToolboxItemAttribute(Type toolboxItemType)
	{
	}

	[Token(Token = "0x6000881")]
	[Address(RVA = "0x6231800", Offset = "0x6230800", VA = "0x6231800", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000882")]
	[Address(RVA = "0x62318C0", Offset = "0x62308C0", VA = "0x62318C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
