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
		[Address(RVA = "0x45625C0", Offset = "0x45625C0", VA = "0x45625C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x45624F0", Offset = "0x45624F0", VA = "0x45624F0")]
	public ComponentResourceManager()
	{
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x4562560", Offset = "0x4562560", VA = "0x4562560")]
	public ComponentResourceManager(Type t)
	{
	}

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x4562650", Offset = "0x4562650", VA = "0x4562650")]
	public void ApplyResources(object value, string objectName)
	{
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x4562670", Offset = "0x4562670", VA = "0x4562670", Slot = "9")]
	public virtual void ApplyResources(object value, string objectName, CultureInfo culture)
	{
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x45631E0", Offset = "0x45631E0", VA = "0x45631E0")]
	private SortedList<string, object> FillResources(CultureInfo culture, out ResourceSet resourceSet)
	{
		return null;
	}
}
