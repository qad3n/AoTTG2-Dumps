// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ToolboxItemAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000195")]
[AttributeUsage(AttributeTargets.All)]
public class ToolboxItemAttribute : Attribute
{
	[Token(Token = "0x4000691")]
	[FieldOffset(Offset = "0x10")]
	private Type _toolboxItemType;

	[Token(Token = "0x4000692")]
	[FieldOffset(Offset = "0x18")]
	private string _toolboxItemTypeName;

	[Token(Token = "0x4000693")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ToolboxItemAttribute Default;

	[Token(Token = "0x4000694")]
	[FieldOffset(Offset = "0x8")]
	public static readonly ToolboxItemAttribute None;

	[Token(Token = "0x170001F8")]
	public Type ToolboxItemType
	{
		[Token(Token = "0x6000A3F")]
		[Address(RVA = "0x28AD7D0", Offset = "0x28ABDD0", VA = "0x1828AD7D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F9")]
	public string ToolboxItemTypeName
	{
		[Token(Token = "0x6000A40")]
		[Address(RVA = "0x1A8E540", Offset = "0x1A8CB40", VA = "0x181A8E540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x28AD4B0", Offset = "0x28ABAB0", VA = "0x1828AD4B0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x28AD700", Offset = "0x28ABD00", VA = "0x1828AD700")]
	public ToolboxItemAttribute(bool defaultType)
	{
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x28AD670", Offset = "0x28ABC70", VA = "0x1828AD670")]
	public ToolboxItemAttribute(string toolboxItemTypeName)
	{
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x28AD770", Offset = "0x28ABD70", VA = "0x1828AD770")]
	public ToolboxItemAttribute(Type toolboxItemType)
	{
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x28AD3A0", Offset = "0x28AB9A0", VA = "0x1828AD3A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x28AD470", Offset = "0x28ABA70", VA = "0x1828AD470", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
