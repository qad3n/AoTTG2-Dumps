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

[Token(Token = "0x2000181")]
public class ComponentResourceManager : ResourceManager
{
	[Token(Token = "0x4000662")]
	[FieldOffset(Offset = "0x88")]
	private Hashtable _resourceSets;

	[Token(Token = "0x4000663")]
	[FieldOffset(Offset = "0x90")]
	private CultureInfo _neutralResourcesCulture;

	[Token(Token = "0x170001E5")]
	private CultureInfo NeutralResourcesCulture
	{
		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x2894AC0", Offset = "0x28930C0", VA = "0x182894AC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x2894A10", Offset = "0x2893010", VA = "0x182894A10")]
	public ComponentResourceManager()
	{
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x2894A60", Offset = "0x2893060", VA = "0x182894A60")]
	public ComponentResourceManager(Type t)
	{
	}

	[Token(Token = "0x60009C2")]
	[Address(RVA = "0x2466850", Offset = "0x2464E50", VA = "0x182466850")]
	public void ApplyResources(object value, string objectName)
	{
	}

	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x2893C80", Offset = "0x2892280", VA = "0x182893C80", Slot = "9")]
	public virtual void ApplyResources(object value, string objectName, CultureInfo culture)
	{
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x2894560", Offset = "0x2892B60", VA = "0x182894560")]
	private SortedList<string, object> FillResources(CultureInfo culture, out ResourceSet resourceSet)
	{
		return null;
	}
}
