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
			[Address(RVA = "0x4530CF0", Offset = "0x4530CF0", VA = "0x4530CF0")]
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
		[Address(RVA = "0x452C300", Offset = "0x452C300", VA = "0x452C300")]
		public FacetsCompiler(DatatypeImplementation baseDatatype, RestrictionFacets restriction)
		{
		}

		[Token(Token = "0x600120C")]
		[Address(RVA = "0x452C690", Offset = "0x452C690", VA = "0x452C690")]
		internal void CompileLengthFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x600120D")]
		[Address(RVA = "0x452CAF0", Offset = "0x452CAF0", VA = "0x452CAF0")]
		internal void CompileMinLengthFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x600120E")]
		[Address(RVA = "0x452CF10", Offset = "0x452CF10", VA = "0x452CF10")]
		internal void CompileMaxLengthFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x600120F")]
		[Address(RVA = "0x452D330", Offset = "0x452D330", VA = "0x452D330")]
		internal void CompilePatternFacet(XmlSchemaPatternFacet facet)
		{
		}

		[Token(Token = "0x6001210")]
		[Address(RVA = "0x452D580", Offset = "0x452D580", VA = "0x452D580")]
		internal void CompileEnumerationFacet(XmlSchemaFacet facet, IXmlNamespaceResolver nsmgr, XmlNameTable nameTable)
		{
		}

		[Token(Token = "0x6001211")]
		[Address(RVA = "0x452D790", Offset = "0x452D790", VA = "0x452D790")]
		internal void CompileWhitespaceFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001212")]
		[Address(RVA = "0x452E180", Offset = "0x452E180", VA = "0x452E180")]
		internal void CompileMaxInclusiveFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001213")]
		[Address(RVA = "0x452E440", Offset = "0x452E440", VA = "0x452E440")]
		internal void CompileMaxExclusiveFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001214")]
		[Address(RVA = "0x452DC00", Offset = "0x452DC00", VA = "0x452DC00")]
		internal void CompileMinInclusiveFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001215")]
		[Address(RVA = "0x452DEC0", Offset = "0x452DEC0", VA = "0x452DEC0")]
		internal void CompileMinExclusiveFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001216")]
		[Address(RVA = "0x452E710", Offset = "0x452E710", VA = "0x452E710")]
		internal void CompileTotalDigitsFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001217")]
		[Address(RVA = "0x452EBC0", Offset = "0x452EBC0", VA = "0x452EBC0")]
		internal void CompileFractionDigitsFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001218")]
		[Address(RVA = "0x452EF60", Offset = "0x452EF60", VA = "0x452EF60")]
		internal void FinishFacetCompile()
		{
		}

		[Token(Token = "0x6001219")]
		[Address(RVA = "0x452FB90", Offset = "0x452FB90", VA = "0x452FB90")]
		private void CheckValue(object value, XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x600121A")]
		[Address(RVA = "0x452F3A0", Offset = "0x452F3A0", VA = "0x452F3A0")]
		internal void CompileFacetCombinations()
		{
		}

		[Token(Token = "0x600121B")]
		[Address(RVA = "0x45303D0", Offset = "0x45303D0", VA = "0x45303D0")]
		private void CopyFacetsFromBaseType()
		{
		}

		[Token(Token = "0x600121C")]
		[Address(RVA = "0x452FA00", Offset = "0x452FA00", VA = "0x452FA00")]
		private object ParseFacetValue(XmlSchemaDatatype datatype, XmlSchemaFacet facet, string code, IXmlNamespaceResolver nsmgr, XmlNameTable nameTable)
		{
			return null;
		}

		[Token(Token = "0x600121D")]
		[Address(RVA = "0x45300F0", Offset = "0x45300F0", VA = "0x45300F0")]
		private static string Preprocess(string pattern)
		{
			return null;
		}

		[Token(Token = "0x600121E")]
		[Address(RVA = "0x452F910", Offset = "0x452F910", VA = "0x452F910")]
		private void CheckProhibitedFlag(XmlSchemaFacet facet, RestrictionFlags flag, string errorCode)
		{
		}

		[Token(Token = "0x600121F")]
		[Address(RVA = "0x452F990", Offset = "0x452F990", VA = "0x452F990")]
		private void CheckDupFlag(XmlSchemaFacet facet, RestrictionFlags flag, string errorCode)
		{
		}

		[Token(Token = "0x6001220")]
		[Address(RVA = "0x452FB40", Offset = "0x452FB40", VA = "0x452FB40")]
		private void SetFlag(XmlSchemaFacet facet, RestrictionFlags flag)
		{
		}

		[Token(Token = "0x6001221")]
		[Address(RVA = "0x45308F0", Offset = "0x45308F0", VA = "0x45308F0")]
		private void SetFlag(RestrictionFlags flag)
		{
		}
	}

	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x452BB40", Offset = "0x452BB40", VA = "0x452BB40", Slot = "4")]
	internal virtual Exception CheckLexicalFacets(ref string parseString, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x452BDB0", Offset = "0x452BDB0", VA = "0x452BDB0", Slot = "5")]
	internal virtual Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x452BDC0", Offset = "0x452BDC0", VA = "0x452BDC0", Slot = "6")]
	internal virtual Exception CheckValueFacets(decimal value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x452BDD0", Offset = "0x452BDD0", VA = "0x452BDD0", Slot = "7")]
	internal virtual Exception CheckValueFacets(long value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FC")]
	[Address(RVA = "0x452BDE0", Offset = "0x452BDE0", VA = "0x452BDE0", Slot = "8")]
	internal virtual Exception CheckValueFacets(int value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FD")]
	[Address(RVA = "0x452BDF0", Offset = "0x452BDF0", VA = "0x452BDF0", Slot = "9")]
	internal virtual Exception CheckValueFacets(short value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FE")]
	[Address(RVA = "0x452BE00", Offset = "0x452BE00", VA = "0x452BE00", Slot = "10")]
	internal virtual Exception CheckValueFacets(DateTime value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FF")]
	[Address(RVA = "0x452BE10", Offset = "0x452BE10", VA = "0x452BE10", Slot = "11")]
	internal virtual Exception CheckValueFacets(double value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001200")]
	[Address(RVA = "0x452BE20", Offset = "0x452BE20", VA = "0x452BE20", Slot = "12")]
	internal virtual Exception CheckValueFacets(float value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001201")]
	[Address(RVA = "0x452BE30", Offset = "0x452BE30", VA = "0x452BE30", Slot = "13")]
	internal virtual Exception CheckValueFacets(string value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x452BE40", Offset = "0x452BE40", VA = "0x452BE40", Slot = "14")]
	internal virtual Exception CheckValueFacets(byte[] value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001203")]
	[Address(RVA = "0x452BE50", Offset = "0x452BE50", VA = "0x452BE50", Slot = "15")]
	internal virtual Exception CheckValueFacets(TimeSpan value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001204")]
	[Address(RVA = "0x452BE60", Offset = "0x452BE60", VA = "0x452BE60", Slot = "16")]
	internal virtual Exception CheckValueFacets(XmlQualifiedName value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001205")]
	[Address(RVA = "0x452BB80", Offset = "0x452BB80", VA = "0x452BB80")]
	internal void CheckWhitespaceFacets(ref string s, XmlSchemaDatatype datatype)
	{
	}

	[Token(Token = "0x6001206")]
	[Address(RVA = "0x452BC60", Offset = "0x452BC60", VA = "0x452BC60")]
	internal Exception CheckPatternFacets(RestrictionFacets restriction, string value)
	{
		return null;
	}

	[Token(Token = "0x6001207")]
	[Address(RVA = "0x452BE70", Offset = "0x452BE70", VA = "0x452BE70", Slot = "17")]
	internal virtual bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001208")]
	[Address(RVA = "0x452BE80", Offset = "0x452BE80", VA = "0x452BE80", Slot = "18")]
	internal virtual RestrictionFacets ConstructRestriction(DatatypeImplementation datatype, XmlSchemaObjectCollection facets, XmlNameTable nameTable)
	{
		return null;
	}

	[Token(Token = "0x6001209")]
	[Address(RVA = "0x452F7E0", Offset = "0x452F7E0", VA = "0x452F7E0")]
	internal static decimal Power(int x, int y)
	{
		return default(decimal);
	}

	[Token(Token = "0x600120A")]
	[Address(RVA = "0x452F900", Offset = "0x452F900", VA = "0x452F900")]
	protected FacetsChecker()
	{
	}
}
