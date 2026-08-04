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
		[Address(RVA = "0x48AAE50", Offset = "0x48AAE50", VA = "0x48AAE50")]
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
		[Address(RVA = "0x48AAE60", Offset = "0x48AAE60", VA = "0x48AAE60")]
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
		[Address(RVA = "0x48AAE70", Offset = "0x48AAE70", VA = "0x48AAE70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x48AAD90", Offset = "0x48AAD90", VA = "0x48AAD90")]
	public ToolboxItemFilterAttribute(string filterString)
	{
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x48AADF0", Offset = "0x48AADF0", VA = "0x48AADF0")]
	public ToolboxItemFilterAttribute(string filterString, ToolboxItemFilterType filterType)
	{
	}

	[Token(Token = "0x6001286")]
	[Address(RVA = "0x48AAED0", Offset = "0x48AAED0", VA = "0x48AAED0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x48AAFC0", Offset = "0x48AAFC0", VA = "0x48AAFC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x48AAFF0", Offset = "0x48AAFF0", VA = "0x48AAFF0", Slot = "5")]
	public override bool Match(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x48AB060", Offset = "0x48AB060", VA = "0x48AB060", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
