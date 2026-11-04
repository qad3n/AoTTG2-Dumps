// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DataBinding
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200002E")]
[UxmlObject]
public class DataBinding : Binding, IDataSourceProvider
{
	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x0")]
	private static MethodInfo s_UpdateUIMethodInfo;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x20")]
	private BindingMode m_BindingMode;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x28")]
	private ConverterGroup m_SourceToUiConverters;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x30")]
	private ConverterGroup m_UiToSourceConverters;

	[Token(Token = "0x17000033")]
	internal static MethodInfo updateUIMethod
	{
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x3090290", Offset = "0x308E890", VA = "0x183090290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000034")]
	[CreateProperty]
	public object dataSource
	{
		[Token(Token = "0x60000D9")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public Type dataSourceType
	{
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000036")]
	[CreateProperty]
	public PropertyPath dataSourcePath
	{
		[Token(Token = "0x60000DD")]
		[Address(RVA = "0x3090070", Offset = "0x308E670", VA = "0x183090070", Slot = "8")]
		[CompilerGenerated]
		get
		{
			return default(PropertyPath);
		}
		[Token(Token = "0x60000DE")]
		[Address(RVA = "0x30904A0", Offset = "0x308EAA0", VA = "0x1830904A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	[CreateProperty]
	public BindingMode bindingMode
	{
		[Token(Token = "0x60000DF")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(BindingMode);
		}
		[Token(Token = "0x60000E0")]
		[Address(RVA = "0x3090490", Offset = "0x308EA90", VA = "0x183090490")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	[CreateProperty(ReadOnly = true)]
	public ConverterGroup sourceToUiConverters
	{
		[Token(Token = "0x60000E1")]
		[Address(RVA = "0x30900D0", Offset = "0x308E6D0", VA = "0x1830900D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000039")]
	[CreateProperty(ReadOnly = true)]
	public ConverterGroup uiToSourceConverters
	{
		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x30901B0", Offset = "0x308E7B0", VA = "0x1830901B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x308FED0", Offset = "0x308E4D0", VA = "0x18308FED0")]
	private static MethodInfo CacheReflectionInfo()
	{
		return null;
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x308FC90", Offset = "0x308E290", VA = "0x18308FC90")]
	public void ApplyConverterGroupToSource(ConverterGroup group)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x308FDB0", Offset = "0x308E3B0", VA = "0x18308FDB0")]
	public void ApplyConverterGroupToUI(ConverterGroup group)
	{
	}

	[Token(Token = "0x60000E5")]
	protected internal virtual BindingResult UpdateUI<TValue>(in BindingContext context, ref TValue value)
	{
		return default(BindingResult);
	}

	[Token(Token = "0x60000E6")]
	protected internal virtual BindingResult UpdateSource<TValue>(in BindingContext context, ref TValue value)
	{
		return default(BindingResult);
	}

	[Token(Token = "0x60000E7")]
	internal static string GetSetValueErrorString<TValue>(VisitReturnCode returnCode, object source, in PropertyPath sourcePath, object target, in BindingId targetPath, TValue extractedValueFromSource)
	{
		return null;
	}
}
