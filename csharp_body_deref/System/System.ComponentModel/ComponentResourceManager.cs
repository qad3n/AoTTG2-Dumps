// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ComponentResourceManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.Resources;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000142")]
public class ComponentResourceManager : ResourceManager
{
	[Token(Token = "0x4000593")]
	[FieldOffset(Offset = "0x88")]
	private Hashtable _resourceSets;

	[Token(Token = "0x4000594")]
	[FieldOffset(Offset = "0x90")]
	private CultureInfo _neutralResourcesCulture;

	[Token(Token = "0x170001B6")]
	private CultureInfo NeutralResourcesCulture
	{
		[Token(Token = "0x6000801")]
		[Address(RVA = "0x6227A40", Offset = "0x6226A40", VA = "0x6227A40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x6227970", Offset = "0x6226970", VA = "0x6227970")]
	public ComponentResourceManager()
	{
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x62279E0", Offset = "0x62269E0", VA = "0x62279E0")]
	public ComponentResourceManager(Type t)
	{
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x6227AD0", Offset = "0x6226AD0", VA = "0x6227AD0")]
	public void ApplyResources(object value, string objectName)
	{
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x6227AF0", Offset = "0x6226AF0", VA = "0x6227AF0", Slot = "9")]
	public virtual void ApplyResources(object value, string objectName, CultureInfo culture)
	{
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x6228670", Offset = "0x6227670", VA = "0x6228670")]
	private SortedList<string, object> FillResources(CultureInfo culture, out ResourceSet resourceSet)
	{
		return null;
	}
}
