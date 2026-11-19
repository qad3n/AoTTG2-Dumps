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
[Token(Token = "0x20001A4")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = true, Inherited = true)]
public sealed class ToolboxItemFilterAttribute : Attribute
{
	[Token(Token = "0x400067D")]
	[FieldOffset(Offset = "0x10")]
	private string _typeId;

	[Token(Token = "0x17000269")]
	public string FilterString
	{
		[Token(Token = "0x6000B0B")]
		[Address(RVA = "0x624A2D0", Offset = "0x62492D0", VA = "0x624A2D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026A")]
	public ToolboxItemFilterType FilterType
	{
		[Token(Token = "0x6000B0C")]
		[Address(RVA = "0x624A2E0", Offset = "0x62492E0", VA = "0x624A2E0")]
		[CompilerGenerated]
		get
		{
			return default(ToolboxItemFilterType);
		}
	}

	[Token(Token = "0x1700026B")]
	public override object TypeId
	{
		[Token(Token = "0x6000B0D")]
		[Address(RVA = "0x624A2F0", Offset = "0x62492F0", VA = "0x624A2F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x624A210", Offset = "0x6249210", VA = "0x624A210")]
	public ToolboxItemFilterAttribute(string filterString)
	{
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x624A270", Offset = "0x6249270", VA = "0x624A270")]
	public ToolboxItemFilterAttribute(string filterString, ToolboxItemFilterType filterType)
	{
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x624A360", Offset = "0x6249360", VA = "0x624A360", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x624A430", Offset = "0x6249430", VA = "0x624A430", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x624A460", Offset = "0x6249460", VA = "0x624A460", Slot = "5")]
	public override bool Match(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x624A4D0", Offset = "0x62494D0", VA = "0x624A4D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
