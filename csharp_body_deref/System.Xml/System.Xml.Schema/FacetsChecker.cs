// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.FacetsChecker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001CE")]
internal abstract class FacetsChecker
{
	[Token(Token = "0x20001CF")]
	private struct FacetsCompiler
	{
		[Token(Token = "0x20001D0")]
		private struct Map
		{
			[Token(Token = "0x4000882")]
			[FieldOffset(Offset = "0x0")]
			internal char match;

			[Token(Token = "0x4000883")]
			[FieldOffset(Offset = "0x8")]
			internal string replacement;

			[Token(Token = "0x6001223")]
			[Address(RVA = "0x180F6B0", Offset = "0x180DCB0", VA = "0x18180F6B0")]
			internal Map(char m, string r)
			{
			}
		}

		[Token(Token = "0x4000876")]
		[FieldOffset(Offset = "0x0")]
		private DatatypeImplementation datatype;

		[Token(Token = "0x4000877")]
		[FieldOffset(Offset = "0x8")]
		private RestrictionFacets derivedRestriction;

		[Token(Token = "0x4000878")]
		[FieldOffset(Offset = "0x10")]
		private RestrictionFlags baseFlags;

		[Token(Token = "0x4000879")]
		[FieldOffset(Offset = "0x14")]
		private RestrictionFlags baseFixedFlags;

		[Token(Token = "0x400087A")]
		[FieldOffset(Offset = "0x18")]
		private RestrictionFlags validRestrictionFlags;

		[Token(Token = "0x400087B")]
		[FieldOffset(Offset = "0x20")]
		private XmlSchemaDatatype nonNegativeInt;

		[Token(Token = "0x400087C")]
		[FieldOffset(Offset = "0x28")]
		private XmlSchemaDatatype builtInType;

		[Token(Token = "0x400087D")]
		[FieldOffset(Offset = "0x30")]
		private XmlTypeCode builtInEnum;

		[Token(Token = "0x400087E")]
		[FieldOffset(Offset = "0x34")]
		private bool firstPattern;

		[Token(Token = "0x400087F")]
		[FieldOffset(Offset = "0x38")]
		private StringBuilder regStr;

		[Token(Token = "0x4000880")]
		[FieldOffset(Offset = "0x40")]
		private XmlSchemaPatternFacet pattern_facet;

		[Token(Token = "0x4000881")]
		[FieldOffset(Offset = "0x0")]
		private static readonly Map[] c_map;

		[Token(Token = "0x600120B")]
		[Address(RVA = "0x27ABF80", Offset = "0x27AA580", VA = "0x1827ABF80")]
		public FacetsCompiler(DatatypeImplementation baseDatatype, RestrictionFacets restriction)
		{
		}

		[Token(Token = "0x600120C")]
		[Address(RVA = "0x27A8E70", Offset = "0x27A7470", VA = "0x1827A8E70")]
		internal void CompileLengthFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x600120D")]
		[Address(RVA = "0x27AA060", Offset = "0x27A8660", VA = "0x1827AA060")]
		internal void CompileMinLengthFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x600120E")]
		[Address(RVA = "0x27A97B0", Offset = "0x27A7DB0", VA = "0x1827A97B0")]
		internal void CompileMaxLengthFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x600120F")]
		[Address(RVA = "0x27AA450", Offset = "0x27A8A50", VA = "0x1827AA450")]
		internal void CompilePatternFacet(XmlSchemaPatternFacet facet)
		{
		}

		[Token(Token = "0x6001210")]
		[Address(RVA = "0x27A8410", Offset = "0x27A6A10", VA = "0x1827A8410")]
		internal void CompileEnumerationFacet(XmlSchemaFacet facet, IXmlNamespaceResolver nsmgr, XmlNameTable nameTable)
		{
		}

		[Token(Token = "0x6001211")]
		[Address(RVA = "0x27AAA10", Offset = "0x27A9010", VA = "0x1827AAA10")]
		internal void CompileWhitespaceFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001212")]
		[Address(RVA = "0x27A9550", Offset = "0x27A7B50", VA = "0x1827A9550")]
		internal void CompileMaxInclusiveFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001213")]
		[Address(RVA = "0x27A92F0", Offset = "0x27A78F0", VA = "0x1827A92F0")]
		internal void CompileMaxExclusiveFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001214")]
		[Address(RVA = "0x27A9E00", Offset = "0x27A8400", VA = "0x1827A9E00")]
		internal void CompileMinInclusiveFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001215")]
		[Address(RVA = "0x27A9BA0", Offset = "0x27A81A0", VA = "0x1827A9BA0")]
		internal void CompileMinExclusiveFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001216")]
		[Address(RVA = "0x27AA600", Offset = "0x27A8C00", VA = "0x1827AA600")]
		internal void CompileTotalDigitsFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001217")]
		[Address(RVA = "0x27A8B20", Offset = "0x27A7120", VA = "0x1827A8B20")]
		internal void CompileFractionDigitsFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001218")]
		[Address(RVA = "0x27AB440", Offset = "0x27A9A40", VA = "0x1827AB440")]
		internal void FinishFacetCompile()
		{
		}

		[Token(Token = "0x6001219")]
		[Address(RVA = "0x27A7DA0", Offset = "0x27A63A0", VA = "0x1827A7DA0")]
		private void CheckValue(object value, XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x600121A")]
		[Address(RVA = "0x27A85B0", Offset = "0x27A6BB0", VA = "0x1827A85B0")]
		internal void CompileFacetCombinations()
		{
		}

		[Token(Token = "0x600121B")]
		[Address(RVA = "0x27AAE70", Offset = "0x27A9470", VA = "0x1827AAE70")]
		private void CopyFacetsFromBaseType()
		{
		}

		[Token(Token = "0x600121C")]
		[Address(RVA = "0x27AB780", Offset = "0x27A9D80", VA = "0x1827AB780")]
		private object ParseFacetValue(XmlSchemaDatatype datatype, XmlSchemaFacet facet, string code, IXmlNamespaceResolver nsmgr, XmlNameTable nameTable)
		{
			return null;
		}

		[Token(Token = "0x600121D")]
		[Address(RVA = "0x27AB930", Offset = "0x27A9F30", VA = "0x1827AB930")]
		private static string Preprocess(string pattern)
		{
			return null;
		}

		[Token(Token = "0x600121E")]
		[Address(RVA = "0x27A7D00", Offset = "0x27A6300", VA = "0x1827A7D00")]
		private void CheckProhibitedFlag(XmlSchemaFacet facet, RestrictionFlags flag, string errorCode)
		{
		}

		[Token(Token = "0x600121F")]
		[Address(RVA = "0x27A7C80", Offset = "0x27A6280", VA = "0x1827A7C80")]
		private void CheckDupFlag(XmlSchemaFacet facet, RestrictionFlags flag, string errorCode)
		{
		}

		[Token(Token = "0x6001220")]
		[Address(RVA = "0x27ABC10", Offset = "0x27AA210", VA = "0x1827ABC10")]
		private void SetFlag(XmlSchemaFacet facet, RestrictionFlags flag)
		{
		}

		[Token(Token = "0x6001221")]
		[Address(RVA = "0x27ABBE0", Offset = "0x27AA1E0", VA = "0x1827ABBE0")]
		private void SetFlag(RestrictionFlags flag)
		{
		}
	}

	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x27A7180", Offset = "0x27A5780", VA = "0x1827A7180", Slot = "4")]
	internal virtual Exception CheckLexicalFacets(ref string parseString, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
	internal virtual Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	internal virtual Exception CheckValueFacets(decimal value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "7")]
	internal virtual Exception CheckValueFacets(long value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FC")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "8")]
	internal virtual Exception CheckValueFacets(int value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FD")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "9")]
	internal virtual Exception CheckValueFacets(short value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FE")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
	internal virtual Exception CheckValueFacets(DateTime value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FF")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "11")]
	internal virtual Exception CheckValueFacets(double value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001200")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "12")]
	internal virtual Exception CheckValueFacets(float value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001201")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "13")]
	internal virtual Exception CheckValueFacets(string value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "14")]
	internal virtual Exception CheckValueFacets(byte[] value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001203")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "15")]
	internal virtual Exception CheckValueFacets(TimeSpan value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001204")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "16")]
	internal virtual Exception CheckValueFacets(XmlQualifiedName value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001205")]
	[Address(RVA = "0x27A7520", Offset = "0x27A5B20", VA = "0x1827A7520")]
	internal void CheckWhitespaceFacets(ref string s, XmlSchemaDatatype datatype)
	{
	}

	[Token(Token = "0x6001206")]
	[Address(RVA = "0x27A73B0", Offset = "0x27A59B0", VA = "0x1827A73B0")]
	internal Exception CheckPatternFacets(RestrictionFacets restriction, string value)
	{
		return null;
	}

	[Token(Token = "0x6001207")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "17")]
	internal virtual bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001208")]
	[Address(RVA = "0x27A7610", Offset = "0x27A5C10", VA = "0x1827A7610", Slot = "18")]
	internal virtual RestrictionFacets ConstructRestriction(DatatypeImplementation datatype, XmlSchemaObjectCollection facets, XmlNameTable nameTable)
	{
		return null;
	}

	[Token(Token = "0x6001209")]
	[Address(RVA = "0x27A7B50", Offset = "0x27A6150", VA = "0x1827A7B50")]
	internal static decimal Power(int x, int y)
	{
		return 0m;
	}

	[Token(Token = "0x600120A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected FacetsChecker()
	{
	}
}
