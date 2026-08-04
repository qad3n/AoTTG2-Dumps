// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x20003D8")]
public class StyleSheet : ScriptableObject
{
	[Serializable]
	[Token(Token = "0x20003D9")]
	internal struct ImportStruct
	{
		[Token(Token = "0x4000B8F")]
		[FieldOffset(Offset = "0x0")]
		public StyleSheet styleSheet;

		[Token(Token = "0x4000B90")]
		[FieldOffset(Offset = "0x8")]
		public string[] mediaQueries;
	}

	[Token(Token = "0x4000B7D")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private bool m_ImportedWithErrors;

	[Token(Token = "0x4000B7E")]
	[FieldOffset(Offset = "0x19")]
	[SerializeField]
	private bool m_ImportedWithWarnings;

	[Token(Token = "0x4000B7F")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private StyleRule[] m_Rules;

	[Token(Token = "0x4000B80")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private StyleComplexSelector[] m_ComplexSelectors;

	[Token(Token = "0x4000B81")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	internal float[] floats;

	[Token(Token = "0x4000B82")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	internal Dimension[] dimensions;

	[Token(Token = "0x4000B83")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	internal Color[] colors;

	[Token(Token = "0x4000B84")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	internal string[] strings;

	[Token(Token = "0x4000B85")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	internal Object[] assets;

	[Token(Token = "0x4000B86")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	internal ImportStruct[] imports;

	[Token(Token = "0x4000B87")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private List<StyleSheet> m_FlattenedImportedStyleSheets;

	[Token(Token = "0x4000B88")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private int m_ContentHash;

	[Token(Token = "0x4000B89")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	internal ScalableImage[] scalableImages;

	[NonSerialized]
	[Token(Token = "0x4000B8A")]
	[FieldOffset(Offset = "0x78")]
	internal Dictionary<string, StyleComplexSelector> orderedNameSelectors;

	[NonSerialized]
	[Token(Token = "0x4000B8B")]
	[FieldOffset(Offset = "0x80")]
	internal Dictionary<string, StyleComplexSelector> orderedTypeSelectors;

	[NonSerialized]
	[Token(Token = "0x4000B8C")]
	[FieldOffset(Offset = "0x88")]
	internal Dictionary<string, StyleComplexSelector> orderedClassSelectors;

	[NonSerialized]
	[Token(Token = "0x4000B8D")]
	[FieldOffset(Offset = "0x90")]
	private bool m_IsDefaultStyleSheet;

	[Token(Token = "0x4000B8E")]
	[FieldOffset(Offset = "0x0")]
	private static string kCustomPropertyMarker;

	[Token(Token = "0x17000684")]
	public bool importedWithErrors
	{
		[Token(Token = "0x6001851")]
		[Address(RVA = "0x50B8430", Offset = "0x50B8430", VA = "0x50B8430")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001852")]
		[Address(RVA = "0x50B8440", Offset = "0x50B8440", VA = "0x50B8440")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000685")]
	public bool importedWithWarnings
	{
		[Token(Token = "0x6001853")]
		[Address(RVA = "0x50B8450", Offset = "0x50B8450", VA = "0x50B8450")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001854")]
		[Address(RVA = "0x50B8460", Offset = "0x50B8460", VA = "0x50B8460")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000686")]
	internal StyleRule[] rules
	{
		[Token(Token = "0x6001855")]
		[Address(RVA = "0x50B8470", Offset = "0x50B8470", VA = "0x50B8470")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001856")]
		[Address(RVA = "0x50B8480", Offset = "0x50B8480", VA = "0x50B8480")]
		set
		{
		}
	}

	[Token(Token = "0x17000687")]
	internal StyleComplexSelector[] complexSelectors
	{
		[Token(Token = "0x6001857")]
		[Address(RVA = "0x50B8B90", Offset = "0x50B8B90", VA = "0x50B8B90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001858")]
		[Address(RVA = "0x50B8BA0", Offset = "0x50B8BA0", VA = "0x50B8BA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000688")]
	internal List<StyleSheet> flattenedRecursiveImports
	{
		[Token(Token = "0x6001859")]
		[Address(RVA = "0x50B8BC0", Offset = "0x50B8BC0", VA = "0x50B8BC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000689")]
	public int contentHash
	{
		[Token(Token = "0x600185A")]
		[Address(RVA = "0x50B8BD0", Offset = "0x50B8BD0", VA = "0x50B8BD0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600185B")]
		[Address(RVA = "0x50B8BE0", Offset = "0x50B8BE0", VA = "0x50B8BE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700068A")]
	internal bool isDefaultStyleSheet
	{
		[Token(Token = "0x600185C")]
		[Address(RVA = "0x50B8BF0", Offset = "0x50B8BF0", VA = "0x50B8BF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600185D")]
		[Address(RVA = "0x50B8C00", Offset = "0x50B8C00", VA = "0x50B8C00")]
		set
		{
		}
	}

	[Token(Token = "0x600185E")]
	private static bool TryCheckAccess<T>(T[] list, StyleValueType type, StyleValueHandle handle, out T value)
	{
		return default(bool);
	}

	[Token(Token = "0x600185F")]
	private static T CheckAccess<T>(T[] list, StyleValueType type, StyleValueHandle handle)
	{
		return (T)null;
	}

	[Token(Token = "0x6001860")]
	[Address(RVA = "0x50B8D60", Offset = "0x50B8D60", VA = "0x50B8D60", Slot = "4")]
	internal virtual void OnEnable()
	{
	}

	[Token(Token = "0x6001861")]
	[Address(RVA = "0x50B8D70", Offset = "0x50B8D70", VA = "0x50B8D70")]
	internal void FlattenImportedStyleSheetsRecursive()
	{
	}

	[Token(Token = "0x6001862")]
	[Address(RVA = "0x50B8DF0", Offset = "0x50B8DF0", VA = "0x50B8DF0")]
	private void FlattenImportedStyleSheetsRecursive(StyleSheet sheet)
	{
	}

	[Token(Token = "0x6001863")]
	[Address(RVA = "0x50B84A0", Offset = "0x50B84A0", VA = "0x50B84A0")]
	private void SetupReferences()
	{
	}

	[Token(Token = "0x6001864")]
	[Address(RVA = "0x50B8FF0", Offset = "0x50B8FF0", VA = "0x50B8FF0")]
	internal StyleValueKeyword ReadKeyword(StyleValueHandle handle)
	{
		return default(StyleValueKeyword);
	}

	[Token(Token = "0x6001865")]
	[Address(RVA = "0x50B9000", Offset = "0x50B9000", VA = "0x50B9000")]
	internal float ReadFloat(StyleValueHandle handle)
	{
		return default(float);
	}

	[Token(Token = "0x6001866")]
	[Address(RVA = "0x50A3AF0", Offset = "0x50A3AF0", VA = "0x50A3AF0")]
	internal bool TryReadFloat(StyleValueHandle handle, out float value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001867")]
	[Address(RVA = "0x50B90E0", Offset = "0x50B90E0", VA = "0x50B90E0")]
	internal Dimension ReadDimension(StyleValueHandle handle)
	{
		return default(Dimension);
	}

	[Token(Token = "0x6001868")]
	[Address(RVA = "0x50B91E0", Offset = "0x50B91E0", VA = "0x50B91E0")]
	internal bool TryReadDimension(StyleValueHandle handle, out Dimension value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001869")]
	[Address(RVA = "0x50B92F0", Offset = "0x50B92F0", VA = "0x50B92F0")]
	internal Color ReadColor(StyleValueHandle handle)
	{
		return default(Color);
	}

	[Token(Token = "0x600186A")]
	[Address(RVA = "0x50A3EA0", Offset = "0x50A3EA0", VA = "0x50A3EA0")]
	internal bool TryReadColor(StyleValueHandle handle, out Color value)
	{
		return default(bool);
	}

	[Token(Token = "0x600186B")]
	[Address(RVA = "0x50B9360", Offset = "0x50B9360", VA = "0x50B9360")]
	internal string ReadString(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x600186C")]
	[Address(RVA = "0x50B93D0", Offset = "0x50B93D0", VA = "0x50B93D0")]
	internal bool TryReadString(StyleValueHandle handle, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600186D")]
	[Address(RVA = "0x50B9450", Offset = "0x50B9450", VA = "0x50B9450")]
	internal string ReadEnum(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x600186E")]
	[Address(RVA = "0x50B94C0", Offset = "0x50B94C0", VA = "0x50B94C0")]
	internal bool TryReadEnum(StyleValueHandle handle, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600186F")]
	[Address(RVA = "0x50B9540", Offset = "0x50B9540", VA = "0x50B9540")]
	internal string ReadVariable(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6001870")]
	[Address(RVA = "0x50B95B0", Offset = "0x50B95B0", VA = "0x50B95B0")]
	internal bool TryReadVariable(StyleValueHandle handle, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001871")]
	[Address(RVA = "0x50B9630", Offset = "0x50B9630", VA = "0x50B9630")]
	internal string ReadResourcePath(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6001872")]
	[Address(RVA = "0x50B96A0", Offset = "0x50B96A0", VA = "0x50B96A0")]
	internal bool TryReadResourcePath(StyleValueHandle handle, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001873")]
	[Address(RVA = "0x50B9720", Offset = "0x50B9720", VA = "0x50B9720")]
	internal Object ReadAssetReference(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6001874")]
	[Address(RVA = "0x50B9790", Offset = "0x50B9790", VA = "0x50B9790")]
	internal string ReadMissingAssetReferenceUrl(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6001875")]
	[Address(RVA = "0x50B9800", Offset = "0x50B9800", VA = "0x50B9800")]
	internal bool TryReadAssetReference(StyleValueHandle handle, out Object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001876")]
	[Address(RVA = "0x50B9880", Offset = "0x50B9880", VA = "0x50B9880")]
	internal StyleValueFunction ReadFunction(StyleValueHandle handle)
	{
		return default(StyleValueFunction);
	}

	[Token(Token = "0x6001877")]
	[Address(RVA = "0x50B9890", Offset = "0x50B9890", VA = "0x50B9890")]
	internal string ReadFunctionName(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6001878")]
	[Address(RVA = "0x50B9B30", Offset = "0x50B9B30", VA = "0x50B9B30")]
	internal ScalableImage ReadScalableImage(StyleValueHandle handle)
	{
		return default(ScalableImage);
	}

	[Token(Token = "0x6001879")]
	[Address(RVA = "0x50B8F50", Offset = "0x50B8F50", VA = "0x50B8F50")]
	private static bool CustomStartsWith(string originalString, string pattern)
	{
		return default(bool);
	}

	[Token(Token = "0x600187A")]
	[Address(RVA = "0x50B9BA0", Offset = "0x50B9BA0", VA = "0x50B9BA0")]
	public StyleSheet()
	{
	}
}
