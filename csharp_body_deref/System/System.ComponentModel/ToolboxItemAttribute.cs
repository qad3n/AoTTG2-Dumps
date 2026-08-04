// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ToolboxItemAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200028A")]
[AttributeUsage(AttributeTargets.All)]
public class ToolboxItemAttribute : Attribute
{
	[Token(Token = "0x4000D5A")]
	[FieldOffset(Offset = "0x10")]
	private Type _toolboxItemType;

	[Token(Token = "0x4000D5B")]
	[FieldOffset(Offset = "0x18")]
	private string _toolboxItemTypeName;

	[Token(Token = "0x4000D5C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ToolboxItemAttribute Default;

	[Token(Token = "0x4000D5D")]
	[FieldOffset(Offset = "0x8")]
	public static readonly ToolboxItemAttribute None;

	[Token(Token = "0x17000389")]
	public Type ToolboxItemType
	{
		[Token(Token = "0x6000FF7")]
		[Address(RVA = "0x48914D0", Offset = "0x48914D0", VA = "0x48914D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700038A")]
	public string ToolboxItemTypeName
	{
		[Token(Token = "0x6000FF8")]
		[Address(RVA = "0x4891680", Offset = "0x4891680", VA = "0x4891680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x4891320", Offset = "0x4891320", VA = "0x4891320", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x4891390", Offset = "0x4891390", VA = "0x4891390")]
	public ToolboxItemAttribute(bool defaultType)
	{
	}

	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x48913F0", Offset = "0x48913F0", VA = "0x48913F0")]
	public ToolboxItemAttribute(string toolboxItemTypeName)
	{
	}

	[Token(Token = "0x6000FF6")]
	[Address(RVA = "0x4891470", Offset = "0x4891470", VA = "0x4891470")]
	public ToolboxItemAttribute(Type toolboxItemType)
	{
	}

	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x48916B0", Offset = "0x48916B0", VA = "0x48916B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x4891790", Offset = "0x4891790", VA = "0x4891790", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
