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

[Token(Token = "0x2000276")]
public class ComponentResourceManager : ResourceManager
{
	[Token(Token = "0x4000D2B")]
	[FieldOffset(Offset = "0x88")]
	private Hashtable _resourceSets;

	[Token(Token = "0x4000D2C")]
	[FieldOffset(Offset = "0x90")]
	private CultureInfo _neutralResourcesCulture;

	[Token(Token = "0x17000376")]
	private CultureInfo NeutralResourcesCulture
	{
		[Token(Token = "0x6000F79")]
		[Address(RVA = "0x48876C0", Offset = "0x48876C0", VA = "0x48876C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x48875F0", Offset = "0x48875F0", VA = "0x48875F0")]
	public ComponentResourceManager()
	{
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x4887660", Offset = "0x4887660", VA = "0x4887660")]
	public ComponentResourceManager(Type t)
	{
	}

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x4887750", Offset = "0x4887750", VA = "0x4887750")]
	public void ApplyResources(object value, string objectName)
	{
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x4887770", Offset = "0x4887770", VA = "0x4887770", Slot = "9")]
	public virtual void ApplyResources(object value, string objectName, CultureInfo culture)
	{
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x48882E0", Offset = "0x48882E0", VA = "0x48882E0")]
	private SortedList<string, object> FillResources(CultureInfo culture, out ResourceSet resourceSet)
	{
		return null;
	}
}
