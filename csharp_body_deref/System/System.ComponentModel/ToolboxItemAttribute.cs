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
		[Address(RVA = "0x456C3D0", Offset = "0x456C3D0", VA = "0x456C3D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700038A")]
	public string ToolboxItemTypeName
	{
		[Token(Token = "0x6000FF8")]
		[Address(RVA = "0x456C580", Offset = "0x456C580", VA = "0x456C580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x456C220", Offset = "0x456C220", VA = "0x456C220", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x456C290", Offset = "0x456C290", VA = "0x456C290")]
	public ToolboxItemAttribute(bool defaultType)
	{
	}

	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x456C2F0", Offset = "0x456C2F0", VA = "0x456C2F0")]
	public ToolboxItemAttribute(string toolboxItemTypeName)
	{
	}

	[Token(Token = "0x6000FF6")]
	[Address(RVA = "0x456C370", Offset = "0x456C370", VA = "0x456C370")]
	public ToolboxItemAttribute(Type toolboxItemType)
	{
	}

	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x456C5B0", Offset = "0x456C5B0", VA = "0x456C5B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x456C690", Offset = "0x456C690", VA = "0x456C690", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
