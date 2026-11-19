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
			[Address(RVA = "0x616C0B0", Offset = "0x616B0B0", VA = "0x616C0B0")]
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
		[Address(RVA = "0x6167A00", Offset = "0x6166A00", VA = "0x6167A00")]
		public FacetsCompiler(DatatypeImplementation baseDatatype, RestrictionFacets restriction)
		{
		}

		[Token(Token = "0x600120C")]
		[Address(RVA = "0x6167D50", Offset = "0x6166D50", VA = "0x6167D50")]
		internal void CompileLengthFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x600120D")]
		[Address(RVA = "0x61681A0", Offset = "0x61671A0", VA = "0x61681A0")]
		internal void CompileMinLengthFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x600120E")]
		[Address(RVA = "0x61685A0", Offset = "0x61675A0", VA = "0x61685A0")]
		internal void CompileMaxLengthFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x600120F")]
		[Address(RVA = "0x61689A0", Offset = "0x61679A0", VA = "0x61689A0")]
		internal void CompilePatternFacet(XmlSchemaPatternFacet facet)
		{
		}

		[Token(Token = "0x6001210")]
		[Address(RVA = "0x6168BF0", Offset = "0x6167BF0", VA = "0x6168BF0")]
		internal void CompileEnumerationFacet(XmlSchemaFacet facet, IXmlNamespaceResolver nsmgr, XmlNameTable nameTable)
		{
		}

		[Token(Token = "0x6001211")]
		[Address(RVA = "0x6168E00", Offset = "0x6167E00", VA = "0x6168E00")]
		internal void CompileWhitespaceFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001212")]
		[Address(RVA = "0x6169770", Offset = "0x6168770", VA = "0x6169770")]
		internal void CompileMaxInclusiveFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001213")]
		[Address(RVA = "0x6169A10", Offset = "0x6168A10", VA = "0x6169A10")]
		internal void CompileMaxExclusiveFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001214")]
		[Address(RVA = "0x6169230", Offset = "0x6168230", VA = "0x6169230")]
		internal void CompileMinInclusiveFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001215")]
		[Address(RVA = "0x61694D0", Offset = "0x61684D0", VA = "0x61694D0")]
		internal void CompileMinExclusiveFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001216")]
		[Address(RVA = "0x6169CB0", Offset = "0x6168CB0", VA = "0x6169CB0")]
		internal void CompileTotalDigitsFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001217")]
		[Address(RVA = "0x616A140", Offset = "0x6169140", VA = "0x616A140")]
		internal void CompileFractionDigitsFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001218")]
		[Address(RVA = "0x616A4C0", Offset = "0x61694C0", VA = "0x616A4C0")]
		internal void FinishFacetCompile()
		{
		}

		[Token(Token = "0x6001219")]
		[Address(RVA = "0x616B010", Offset = "0x616A010", VA = "0x616B010")]
		private void CheckValue(object value, XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x600121A")]
		[Address(RVA = "0x616A840", Offset = "0x6169840", VA = "0x616A840")]
		internal void CompileFacetCombinations()
		{
		}

		[Token(Token = "0x600121B")]
		[Address(RVA = "0x616B830", Offset = "0x616A830", VA = "0x616B830")]
		private void CopyFacetsFromBaseType()
		{
		}

		[Token(Token = "0x600121C")]
		[Address(RVA = "0x616AE70", Offset = "0x6169E70", VA = "0x616AE70")]
		private object ParseFacetValue(XmlSchemaDatatype datatype, XmlSchemaFacet facet, string code, IXmlNamespaceResolver nsmgr, XmlNameTable nameTable)
		{
			return null;
		}

		[Token(Token = "0x600121D")]
		[Address(RVA = "0x616B560", Offset = "0x616A560", VA = "0x616B560")]
		private static string Preprocess(string pattern)
		{
			return null;
		}

		[Token(Token = "0x600121E")]
		[Address(RVA = "0x616AD80", Offset = "0x6169D80", VA = "0x616AD80")]
		private void CheckProhibitedFlag(XmlSchemaFacet facet, RestrictionFlags flag, string errorCode)
		{
		}

		[Token(Token = "0x600121F")]
		[Address(RVA = "0x616AE00", Offset = "0x6169E00", VA = "0x616AE00")]
		private void CheckDupFlag(XmlSchemaFacet facet, RestrictionFlags flag, string errorCode)
		{
		}

		[Token(Token = "0x6001220")]
		[Address(RVA = "0x616AFC0", Offset = "0x6169FC0", VA = "0x616AFC0")]
		private void SetFlag(XmlSchemaFacet facet, RestrictionFlags flag)
		{
		}

		[Token(Token = "0x6001221")]
		[Address(RVA = "0x616BD10", Offset = "0x616AD10", VA = "0x616BD10")]
		private void SetFlag(RestrictionFlags flag)
		{
		}
	}

	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x6167240", Offset = "0x6166240", VA = "0x6167240", Slot = "4")]
	internal virtual Exception CheckLexicalFacets(ref string parseString, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x61674B0", Offset = "0x61664B0", VA = "0x61674B0", Slot = "5")]
	internal virtual Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x61674C0", Offset = "0x61664C0", VA = "0x61674C0", Slot = "6")]
	internal virtual Exception CheckValueFacets(decimal value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x61674D0", Offset = "0x61664D0", VA = "0x61674D0", Slot = "7")]
	internal virtual Exception CheckValueFacets(long value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FC")]
	[Address(RVA = "0x61674E0", Offset = "0x61664E0", VA = "0x61674E0", Slot = "8")]
	internal virtual Exception CheckValueFacets(int value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FD")]
	[Address(RVA = "0x61674F0", Offset = "0x61664F0", VA = "0x61674F0", Slot = "9")]
	internal virtual Exception CheckValueFacets(short value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FE")]
	[Address(RVA = "0x6167500", Offset = "0x6166500", VA = "0x6167500", Slot = "10")]
	internal virtual Exception CheckValueFacets(DateTime value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FF")]
	[Address(RVA = "0x6167510", Offset = "0x6166510", VA = "0x6167510", Slot = "11")]
	internal virtual Exception CheckValueFacets(double value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001200")]
	[Address(RVA = "0x6167520", Offset = "0x6166520", VA = "0x6167520", Slot = "12")]
	internal virtual Exception CheckValueFacets(float value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001201")]
	[Address(RVA = "0x6167530", Offset = "0x6166530", VA = "0x6167530", Slot = "13")]
	internal virtual Exception CheckValueFacets(string value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x6167540", Offset = "0x6166540", VA = "0x6167540", Slot = "14")]
	internal virtual Exception CheckValueFacets(byte[] value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001203")]
	[Address(RVA = "0x6167550", Offset = "0x6166550", VA = "0x6167550", Slot = "15")]
	internal virtual Exception CheckValueFacets(TimeSpan value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001204")]
	[Address(RVA = "0x6167560", Offset = "0x6166560", VA = "0x6167560", Slot = "16")]
	internal virtual Exception CheckValueFacets(XmlQualifiedName value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001205")]
	[Address(RVA = "0x6167280", Offset = "0x6166280", VA = "0x6167280")]
	internal void CheckWhitespaceFacets(ref string s, XmlSchemaDatatype datatype)
	{
	}

	[Token(Token = "0x6001206")]
	[Address(RVA = "0x6167360", Offset = "0x6166360", VA = "0x6167360")]
	internal Exception CheckPatternFacets(RestrictionFacets restriction, string value)
	{
		return null;
	}

	[Token(Token = "0x6001207")]
	[Address(RVA = "0x6167570", Offset = "0x6166570", VA = "0x6167570", Slot = "17")]
	internal virtual bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001208")]
	[Address(RVA = "0x6167580", Offset = "0x6166580", VA = "0x6167580", Slot = "18")]
	internal virtual RestrictionFacets ConstructRestriction(DatatypeImplementation datatype, XmlSchemaObjectCollection facets, XmlNameTable nameTable)
	{
		return null;
	}

	[Token(Token = "0x6001209")]
	[Address(RVA = "0x616AC60", Offset = "0x6169C60", VA = "0x616AC60")]
	internal static decimal Power(int x, int y)
	{
		return 0m;
	}

	[Token(Token = "0x600120A")]
	[Address(RVA = "0x616AD70", Offset = "0x6169D70", VA = "0x616AD70")]
	protected FacetsChecker()
	{
	}
}
