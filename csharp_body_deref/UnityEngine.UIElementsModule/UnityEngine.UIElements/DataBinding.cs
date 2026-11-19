// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DataBinding
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200002D")]
[UxmlObject]
public class DataBinding : Binding, IDataSourceProvider
{
	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x0")]
	private static MethodInfo s_UpdateUIMethodInfo;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x20")]
	private BindingMode m_BindingMode;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x28")]
	private ConverterGroup m_SourceToUiConverters;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x30")]
	private ConverterGroup m_UiToSourceConverters;

	[Token(Token = "0x17000033")]
	internal static MethodInfo updateUIMethod
	{
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x6A7FEC0", Offset = "0x6A7EEC0", VA = "0x6A7FEC0")]
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
		[Address(RVA = "0x6A806F0", Offset = "0x6A7F6F0", VA = "0x6A806F0", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x6A80700", Offset = "0x6A7F700", VA = "0x6A80700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public Type dataSourceType
	{
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x6A80710", Offset = "0x6A7F710", VA = "0x6A80710")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x6A80720", Offset = "0x6A7F720", VA = "0x6A80720")]
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
		[Address(RVA = "0x6A80730", Offset = "0x6A7F730", VA = "0x6A80730", Slot = "8")]
		[CompilerGenerated]
		get
		{
			return default(PropertyPath);
		}
		[Token(Token = "0x60000DE")]
		[Address(RVA = "0x6A80750", Offset = "0x6A7F750", VA = "0x6A80750")]
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
		[Address(RVA = "0x6A80780", Offset = "0x6A7F780", VA = "0x6A80780")]
		get
		{
			return default(BindingMode);
		}
		[Token(Token = "0x60000E0")]
		[Address(RVA = "0x6A80790", Offset = "0x6A7F790", VA = "0x6A80790")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	[CreateProperty(ReadOnly = true)]
	public ConverterGroup sourceToUiConverters
	{
		[Token(Token = "0x60000E1")]
		[Address(RVA = "0x6A807A0", Offset = "0x6A7F7A0", VA = "0x6A807A0")]
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
		[Address(RVA = "0x6A80870", Offset = "0x6A7F870", VA = "0x6A80870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x6A80550", Offset = "0x6A7F550", VA = "0x6A80550")]
	private static MethodInfo CacheReflectionInfo()
	{
		return null;
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x6A80940", Offset = "0x6A7F940", VA = "0x6A80940")]
	public void ApplyConverterGroupToSource(ConverterGroup group)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x6A80980", Offset = "0x6A7F980", VA = "0x6A80980")]
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
