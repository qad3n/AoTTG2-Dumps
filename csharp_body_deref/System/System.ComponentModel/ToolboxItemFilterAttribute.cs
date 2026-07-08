using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Serializable]
[Token(Token = "0x20002D8")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = true, Inherited = true)]
public sealed class ToolboxItemFilterAttribute : Attribute
{
	[Token(Token = "0x4000E15")]
	[FieldOffset(Offset = "0x10")]
	private string _typeId;

	[Token(Token = "0x17000429")]
	public string FilterString
	{
		[Token(Token = "0x6001283")]
		[Address(RVA = "0x4585D50", Offset = "0x4585D50", VA = "0x4585D50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700042A")]
	public ToolboxItemFilterType FilterType
	{
		[Token(Token = "0x6001284")]
		[Address(RVA = "0x4585D60", Offset = "0x4585D60", VA = "0x4585D60")]
		[CompilerGenerated]
		get
		{
			return default(ToolboxItemFilterType);
		}
	}

	[Token(Token = "0x1700042B")]
	public override object TypeId
	{
		[Token(Token = "0x6001285")]
		[Address(RVA = "0x4585D70", Offset = "0x4585D70", VA = "0x4585D70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x4585C90", Offset = "0x4585C90", VA = "0x4585C90")]
	public ToolboxItemFilterAttribute(string filterString)
	{
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x4585CF0", Offset = "0x4585CF0", VA = "0x4585CF0")]
	public ToolboxItemFilterAttribute(string filterString, ToolboxItemFilterType filterType)
	{
	}

	[Token(Token = "0x6001286")]
	[Address(RVA = "0x4585DD0", Offset = "0x4585DD0", VA = "0x4585DD0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x4585EC0", Offset = "0x4585EC0", VA = "0x4585EC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x4585EF0", Offset = "0x4585EF0", VA = "0x4585EF0", Slot = "5")]
	public override bool Match(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x4585F60", Offset = "0x4585F60", VA = "0x4585F60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
