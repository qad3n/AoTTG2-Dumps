// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.LogicalExpr
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002A9")]
internal sealed class LogicalExpr : ValueQuery
{
	[Token(Token = "0x20002AA")]
	private delegate bool cmpXslt(Operator.Op op, object val1, object val2);

	[Token(Token = "0x20002AB")]
	private struct NodeSet
	{
		[Token(Token = "0x4000E5B")]
		[FieldOffset(Offset = "0x0")]
		private Query _opnd;

		[Token(Token = "0x4000E5C")]
		[FieldOffset(Offset = "0x8")]
		private XPathNavigator _current;

		[Token(Token = "0x1700070C")]
		public string Value
		{
			[Token(Token = "0x6001B55")]
			[Address(RVA = "0x477E620", Offset = "0x477E620", VA = "0x477E620")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001B52")]
		[Address(RVA = "0x477E520", Offset = "0x477E520", VA = "0x477E520")]
		public NodeSet(object opnd)
		{
		}

		[Token(Token = "0x6001B53")]
		[Address(RVA = "0x477E5E0", Offset = "0x477E5E0", VA = "0x477E5E0")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001B54")]
		[Address(RVA = "0x477E650", Offset = "0x477E650", VA = "0x477E650")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000E56")]
	[FieldOffset(Offset = "0x14")]
	private Operator.Op _op;

	[Token(Token = "0x4000E57")]
	[FieldOffset(Offset = "0x18")]
	private Query _opnd1;

	[Token(Token = "0x4000E58")]
	[FieldOffset(Offset = "0x20")]
	private Query _opnd2;

	[Token(Token = "0x4000E59")]
	[FieldOffset(Offset = "0x0")]
	private static readonly cmpXslt[][] s_CompXsltE;

	[Token(Token = "0x4000E5A")]
	[FieldOffset(Offset = "0x8")]
	private static readonly cmpXslt[][] s_CompXsltO;

	[Token(Token = "0x1700070B")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001B4E")]
		[Address(RVA = "0x4780BA0", Offset = "0x4780BA0", VA = "0x4780BA0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B2A")]
	[Address(RVA = "0x477DF40", Offset = "0x477DF40", VA = "0x477DF40")]
	public LogicalExpr(Operator.Op op, Query opnd1, Query opnd2)
	{
	}

	[Token(Token = "0x6001B2B")]
	[Address(RVA = "0x477DF90", Offset = "0x477DF90", VA = "0x477DF90")]
	private LogicalExpr(LogicalExpr other)
	{
	}

	[Token(Token = "0x6001B2C")]
	[Address(RVA = "0x477E000", Offset = "0x477E000", VA = "0x477E000", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001B2D")]
	[Address(RVA = "0x477E050", Offset = "0x477E050", VA = "0x477E050", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B2E")]
	[Address(RVA = "0x477E390", Offset = "0x477E390", VA = "0x477E390")]
	private static bool cmpQueryQueryE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B2F")]
	[Address(RVA = "0x477E680", Offset = "0x477E680", VA = "0x477E680")]
	private static bool cmpQueryQueryO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B30")]
	[Address(RVA = "0x477EAD0", Offset = "0x477EAD0", VA = "0x477EAD0")]
	private static bool cmpQueryNumber(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B31")]
	[Address(RVA = "0x477ED80", Offset = "0x477ED80", VA = "0x477ED80")]
	private static bool cmpQueryStringE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B32")]
	[Address(RVA = "0x477EEC0", Offset = "0x477EEC0", VA = "0x477EEC0")]
	private static bool cmpQueryStringO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B33")]
	[Address(RVA = "0x477F1B0", Offset = "0x477F1B0", VA = "0x477F1B0")]
	private static bool cmpRtfQueryE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B34")]
	[Address(RVA = "0x477F350", Offset = "0x477F350", VA = "0x477F350")]
	private static bool cmpRtfQueryO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B35")]
	[Address(RVA = "0x477F5F0", Offset = "0x477F5F0", VA = "0x477F5F0")]
	private static bool cmpQueryBoolE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B36")]
	[Address(RVA = "0x477F6E0", Offset = "0x477F6E0", VA = "0x477F6E0")]
	private static bool cmpQueryBoolO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B37")]
	[Address(RVA = "0x477F6D0", Offset = "0x477F6D0", VA = "0x477F6D0")]
	private static bool cmpBoolBoolE(Operator.Op op, bool n1, bool n2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B38")]
	[Address(RVA = "0x477F880", Offset = "0x477F880", VA = "0x477F880")]
	private static bool cmpBoolBoolE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B39")]
	[Address(RVA = "0x477F950", Offset = "0x477F950", VA = "0x477F950")]
	private static bool cmpBoolBoolO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3A")]
	[Address(RVA = "0x477FAB0", Offset = "0x477FAB0", VA = "0x477FAB0")]
	private static bool cmpBoolNumberE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3B")]
	[Address(RVA = "0x477FBD0", Offset = "0x477FBD0", VA = "0x477FBD0")]
	private static bool cmpBoolNumberO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3C")]
	[Address(RVA = "0x477FD10", Offset = "0x477FD10", VA = "0x477FD10")]
	private static bool cmpBoolStringE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3D")]
	[Address(RVA = "0x477FDD0", Offset = "0x477FDD0", VA = "0x477FDD0")]
	private static bool cmpRtfBoolE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3E")]
	[Address(RVA = "0x477FE90", Offset = "0x477FE90", VA = "0x477FE90")]
	private static bool cmpBoolStringO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3F")]
	[Address(RVA = "0x4780000", Offset = "0x4780000", VA = "0x4780000")]
	private static bool cmpRtfBoolO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B40")]
	[Address(RVA = "0x477EA70", Offset = "0x477EA70", VA = "0x477EA70")]
	private static bool cmpNumberNumber(Operator.Op op, double n1, double n2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B41")]
	[Address(RVA = "0x477F170", Offset = "0x477F170", VA = "0x477F170")]
	private static bool cmpNumberNumberO(Operator.Op op, double n1, double n2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B42")]
	[Address(RVA = "0x4780130", Offset = "0x4780130", VA = "0x4780130")]
	private static bool cmpNumberNumber(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B43")]
	[Address(RVA = "0x4780280", Offset = "0x4780280", VA = "0x4780280")]
	private static bool cmpStringNumber(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B44")]
	[Address(RVA = "0x4780400", Offset = "0x4780400", VA = "0x4780400")]
	private static bool cmpRtfNumber(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B45")]
	[Address(RVA = "0x477EEA0", Offset = "0x477EEA0", VA = "0x477EEA0")]
	private static bool cmpStringStringE(Operator.Op op, string n1, string n2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B46")]
	[Address(RVA = "0x4780550", Offset = "0x4780550", VA = "0x4780550")]
	private static bool cmpStringStringE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B47")]
	[Address(RVA = "0x47805E0", Offset = "0x47805E0", VA = "0x47805E0")]
	private static bool cmpRtfStringE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B48")]
	[Address(RVA = "0x4780690", Offset = "0x4780690", VA = "0x4780690")]
	private static bool cmpRtfRtfE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B49")]
	[Address(RVA = "0x4780700", Offset = "0x4780700", VA = "0x4780700")]
	private static bool cmpStringStringO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B4A")]
	[Address(RVA = "0x4780880", Offset = "0x4780880", VA = "0x4780880")]
	private static bool cmpRtfStringO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B4B")]
	[Address(RVA = "0x47809D0", Offset = "0x47809D0", VA = "0x47809D0")]
	private static bool cmpRtfRtfO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B4C")]
	[Address(RVA = "0x4780B00", Offset = "0x4780B00", VA = "0x4780B00", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001B4D")]
	[Address(RVA = "0x477F2C0", Offset = "0x477F2C0", VA = "0x477F2C0")]
	private static string Rtf(object o)
	{
		return null;
	}
}
