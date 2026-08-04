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
			[Address(RVA = "0x486E450", Offset = "0x486E450", VA = "0x486E450")]
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
		[Address(RVA = "0x4869A60", Offset = "0x4869A60", VA = "0x4869A60")]
		public FacetsCompiler(DatatypeImplementation baseDatatype, RestrictionFacets restriction)
		{
		}

		[Token(Token = "0x600120C")]
		[Address(RVA = "0x4869DF0", Offset = "0x4869DF0", VA = "0x4869DF0")]
		internal void CompileLengthFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x600120D")]
		[Address(RVA = "0x486A250", Offset = "0x486A250", VA = "0x486A250")]
		internal void CompileMinLengthFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x600120E")]
		[Address(RVA = "0x486A670", Offset = "0x486A670", VA = "0x486A670")]
		internal void CompileMaxLengthFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x600120F")]
		[Address(RVA = "0x486AA90", Offset = "0x486AA90", VA = "0x486AA90")]
		internal void CompilePatternFacet(XmlSchemaPatternFacet facet)
		{
		}

		[Token(Token = "0x6001210")]
		[Address(RVA = "0x486ACE0", Offset = "0x486ACE0", VA = "0x486ACE0")]
		internal void CompileEnumerationFacet(XmlSchemaFacet facet, IXmlNamespaceResolver nsmgr, XmlNameTable nameTable)
		{
		}

		[Token(Token = "0x6001211")]
		[Address(RVA = "0x486AEF0", Offset = "0x486AEF0", VA = "0x486AEF0")]
		internal void CompileWhitespaceFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001212")]
		[Address(RVA = "0x486B8E0", Offset = "0x486B8E0", VA = "0x486B8E0")]
		internal void CompileMaxInclusiveFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001213")]
		[Address(RVA = "0x486BBA0", Offset = "0x486BBA0", VA = "0x486BBA0")]
		internal void CompileMaxExclusiveFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001214")]
		[Address(RVA = "0x486B360", Offset = "0x486B360", VA = "0x486B360")]
		internal void CompileMinInclusiveFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001215")]
		[Address(RVA = "0x486B620", Offset = "0x486B620", VA = "0x486B620")]
		internal void CompileMinExclusiveFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001216")]
		[Address(RVA = "0x486BE70", Offset = "0x486BE70", VA = "0x486BE70")]
		internal void CompileTotalDigitsFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001217")]
		[Address(RVA = "0x486C320", Offset = "0x486C320", VA = "0x486C320")]
		internal void CompileFractionDigitsFacet(XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x6001218")]
		[Address(RVA = "0x486C6C0", Offset = "0x486C6C0", VA = "0x486C6C0")]
		internal void FinishFacetCompile()
		{
		}

		[Token(Token = "0x6001219")]
		[Address(RVA = "0x486D2F0", Offset = "0x486D2F0", VA = "0x486D2F0")]
		private void CheckValue(object value, XmlSchemaFacet facet)
		{
		}

		[Token(Token = "0x600121A")]
		[Address(RVA = "0x486CB00", Offset = "0x486CB00", VA = "0x486CB00")]
		internal void CompileFacetCombinations()
		{
		}

		[Token(Token = "0x600121B")]
		[Address(RVA = "0x486DB30", Offset = "0x486DB30", VA = "0x486DB30")]
		private void CopyFacetsFromBaseType()
		{
		}

		[Token(Token = "0x600121C")]
		[Address(RVA = "0x486D160", Offset = "0x486D160", VA = "0x486D160")]
		private object ParseFacetValue(XmlSchemaDatatype datatype, XmlSchemaFacet facet, string code, IXmlNamespaceResolver nsmgr, XmlNameTable nameTable)
		{
			return null;
		}

		[Token(Token = "0x600121D")]
		[Address(RVA = "0x486D850", Offset = "0x486D850", VA = "0x486D850")]
		private static string Preprocess(string pattern)
		{
			return null;
		}

		[Token(Token = "0x600121E")]
		[Address(RVA = "0x486D070", Offset = "0x486D070", VA = "0x486D070")]
		private void CheckProhibitedFlag(XmlSchemaFacet facet, RestrictionFlags flag, string errorCode)
		{
		}

		[Token(Token = "0x600121F")]
		[Address(RVA = "0x486D0F0", Offset = "0x486D0F0", VA = "0x486D0F0")]
		private void CheckDupFlag(XmlSchemaFacet facet, RestrictionFlags flag, string errorCode)
		{
		}

		[Token(Token = "0x6001220")]
		[Address(RVA = "0x486D2A0", Offset = "0x486D2A0", VA = "0x486D2A0")]
		private void SetFlag(XmlSchemaFacet facet, RestrictionFlags flag)
		{
		}

		[Token(Token = "0x6001221")]
		[Address(RVA = "0x486E050", Offset = "0x486E050", VA = "0x486E050")]
		private void SetFlag(RestrictionFlags flag)
		{
		}
	}

	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x48692A0", Offset = "0x48692A0", VA = "0x48692A0", Slot = "4")]
	internal virtual Exception CheckLexicalFacets(ref string parseString, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x4869510", Offset = "0x4869510", VA = "0x4869510", Slot = "5")]
	internal virtual Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x4869520", Offset = "0x4869520", VA = "0x4869520", Slot = "6")]
	internal virtual Exception CheckValueFacets(decimal value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x4869530", Offset = "0x4869530", VA = "0x4869530", Slot = "7")]
	internal virtual Exception CheckValueFacets(long value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FC")]
	[Address(RVA = "0x4869540", Offset = "0x4869540", VA = "0x4869540", Slot = "8")]
	internal virtual Exception CheckValueFacets(int value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FD")]
	[Address(RVA = "0x4869550", Offset = "0x4869550", VA = "0x4869550", Slot = "9")]
	internal virtual Exception CheckValueFacets(short value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FE")]
	[Address(RVA = "0x4869560", Offset = "0x4869560", VA = "0x4869560", Slot = "10")]
	internal virtual Exception CheckValueFacets(DateTime value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x60011FF")]
	[Address(RVA = "0x4869570", Offset = "0x4869570", VA = "0x4869570", Slot = "11")]
	internal virtual Exception CheckValueFacets(double value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001200")]
	[Address(RVA = "0x4869580", Offset = "0x4869580", VA = "0x4869580", Slot = "12")]
	internal virtual Exception CheckValueFacets(float value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001201")]
	[Address(RVA = "0x4869590", Offset = "0x4869590", VA = "0x4869590", Slot = "13")]
	internal virtual Exception CheckValueFacets(string value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x48695A0", Offset = "0x48695A0", VA = "0x48695A0", Slot = "14")]
	internal virtual Exception CheckValueFacets(byte[] value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001203")]
	[Address(RVA = "0x48695B0", Offset = "0x48695B0", VA = "0x48695B0", Slot = "15")]
	internal virtual Exception CheckValueFacets(TimeSpan value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001204")]
	[Address(RVA = "0x48695C0", Offset = "0x48695C0", VA = "0x48695C0", Slot = "16")]
	internal virtual Exception CheckValueFacets(XmlQualifiedName value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001205")]
	[Address(RVA = "0x48692E0", Offset = "0x48692E0", VA = "0x48692E0")]
	internal void CheckWhitespaceFacets(ref string s, XmlSchemaDatatype datatype)
	{
	}

	[Token(Token = "0x6001206")]
	[Address(RVA = "0x48693C0", Offset = "0x48693C0", VA = "0x48693C0")]
	internal Exception CheckPatternFacets(RestrictionFacets restriction, string value)
	{
		return null;
	}

	[Token(Token = "0x6001207")]
	[Address(RVA = "0x48695D0", Offset = "0x48695D0", VA = "0x48695D0", Slot = "17")]
	internal virtual bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001208")]
	[Address(RVA = "0x48695E0", Offset = "0x48695E0", VA = "0x48695E0", Slot = "18")]
	internal virtual RestrictionFacets ConstructRestriction(DatatypeImplementation datatype, XmlSchemaObjectCollection facets, XmlNameTable nameTable)
	{
		return null;
	}

	[Token(Token = "0x6001209")]
	[Address(RVA = "0x486CF40", Offset = "0x486CF40", VA = "0x486CF40")]
	internal static decimal Power(int x, int y)
	{
		return default(decimal);
	}

	[Token(Token = "0x600120A")]
	[Address(RVA = "0x486D060", Offset = "0x486D060", VA = "0x486D060")]
	protected FacetsChecker()
	{
	}
}
