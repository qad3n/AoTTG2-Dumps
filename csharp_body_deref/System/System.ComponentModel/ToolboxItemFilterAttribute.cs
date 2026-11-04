// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ToolboxItemFilterAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Serializable]
[Token(Token = "0x20001E3")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = true, Inherited = true)]
public sealed class ToolboxItemFilterAttribute : Attribute
{
	[Token(Token = "0x400074C")]
	[FieldOffset(Offset = "0x10")]
	private string _typeId;

	[Token(Token = "0x17000298")]
	public string FilterString
	{
		[Token(Token = "0x6000CCB")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000299")]
	public ToolboxItemFilterType FilterType
	{
		[Token(Token = "0x6000CCC")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		[CompilerGenerated]
		get
		{
			return default(ToolboxItemFilterType);
		}
	}

	[Token(Token = "0x1700029A")]
	public override object TypeId
	{
		[Token(Token = "0x6000CCD")]
		[Address(RVA = "0x28C9F90", Offset = "0x28C8590", VA = "0x1828C9F90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x28C9F30", Offset = "0x28C8530", VA = "0x1828C9F30")]
	public ToolboxItemFilterAttribute(string filterString)
	{
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x28C9EC0", Offset = "0x28C84C0", VA = "0x1828C9EC0")]
	public ToolboxItemFilterAttribute(string filterString, ToolboxItemFilterType filterType)
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x28C9C60", Offset = "0x28C8260", VA = "0x1828C9C60", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x24F5110", Offset = "0x24F3710", VA = "0x1824F5110", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x28C9D60", Offset = "0x28C8360", VA = "0x1828C9D60", Slot = "5")]
	public override bool Match(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x28C9DE0", Offset = "0x28C83E0", VA = "0x1828C9DE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
