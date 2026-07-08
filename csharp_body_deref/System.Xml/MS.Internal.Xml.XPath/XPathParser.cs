using System.Collections.Generic;
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002CB")]
internal class XPathParser
{
	[Token(Token = "0x20002CC")]
	private class ParamInfo
	{
		[Token(Token = "0x4000EBE")]
		[FieldOffset(Offset = "0x10")]
		private Function.FunctionType _ftype;

		[Token(Token = "0x4000EBF")]
		[FieldOffset(Offset = "0x14")]
		private int _minargs;

		[Token(Token = "0x4000EC0")]
		[FieldOffset(Offset = "0x18")]
		private int _maxargs;

		[Token(Token = "0x4000EC1")]
		[FieldOffset(Offset = "0x20")]
		private XPathResultType[] _argTypes;

		[Token(Token = "0x1700073A")]
		public Function.FunctionType FType
		{
			[Token(Token = "0x6001C40")]
			[Address(RVA = "0x4450CF0", Offset = "0x4450CF0", VA = "0x4450CF0")]
			get
			{
				return default(Function.FunctionType);
			}
		}

		[Token(Token = "0x1700073B")]
		public int Minargs
		{
			[Token(Token = "0x6001C41")]
			[Address(RVA = "0x4450D00", Offset = "0x4450D00", VA = "0x4450D00")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700073C")]
		public int Maxargs
		{
			[Token(Token = "0x6001C42")]
			[Address(RVA = "0x4450D10", Offset = "0x4450D10", VA = "0x4450D10")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700073D")]
		public XPathResultType[] ArgTypes
		{
			[Token(Token = "0x6001C43")]
			[Address(RVA = "0x4450D20", Offset = "0x4450D20", VA = "0x4450D20")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001C44")]
		[Address(RVA = "0x44506C0", Offset = "0x44506C0", VA = "0x44506C0")]
		internal ParamInfo(Function.FunctionType ftype, int minargs, int maxargs, XPathResultType[] argTypes)
		{
		}
	}

	[Token(Token = "0x4000EB1")]
	[FieldOffset(Offset = "0x10")]
	private XPathScanner _scanner;

	[Token(Token = "0x4000EB2")]
	[FieldOffset(Offset = "0x18")]
	private int _parseDepth;

	[Token(Token = "0x4000EB3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly XPathResultType[] s_temparray1;

	[Token(Token = "0x4000EB4")]
	[FieldOffset(Offset = "0x8")]
	private static readonly XPathResultType[] s_temparray2;

	[Token(Token = "0x4000EB5")]
	[FieldOffset(Offset = "0x10")]
	private static readonly XPathResultType[] s_temparray3;

	[Token(Token = "0x4000EB6")]
	[FieldOffset(Offset = "0x18")]
	private static readonly XPathResultType[] s_temparray4;

	[Token(Token = "0x4000EB7")]
	[FieldOffset(Offset = "0x20")]
	private static readonly XPathResultType[] s_temparray5;

	[Token(Token = "0x4000EB8")]
	[FieldOffset(Offset = "0x28")]
	private static readonly XPathResultType[] s_temparray6;

	[Token(Token = "0x4000EB9")]
	[FieldOffset(Offset = "0x30")]
	private static readonly XPathResultType[] s_temparray7;

	[Token(Token = "0x4000EBA")]
	[FieldOffset(Offset = "0x38")]
	private static readonly XPathResultType[] s_temparray8;

	[Token(Token = "0x4000EBB")]
	[FieldOffset(Offset = "0x40")]
	private static readonly XPathResultType[] s_temparray9;

	[Token(Token = "0x4000EBC")]
	[FieldOffset(Offset = "0x48")]
	private static Dictionary<string, ParamInfo> s_functionTable;

	[Token(Token = "0x4000EBD")]
	[FieldOffset(Offset = "0x50")]
	private static Dictionary<string, Axis.AxisType> s_AxesTable;

	[Token(Token = "0x6001C20")]
	[Address(RVA = "0x444D2A0", Offset = "0x444D2A0", VA = "0x444D2A0")]
	private XPathParser(XPathScanner scanner)
	{
	}

	[Token(Token = "0x6001C21")]
	[Address(RVA = "0x4449310", Offset = "0x4449310", VA = "0x4449310")]
	public static AstNode ParseXPathExpression(string xpathExpression)
	{
		return null;
	}

	[Token(Token = "0x6001C22")]
	[Address(RVA = "0x444D3B0", Offset = "0x444D3B0", VA = "0x444D3B0")]
	private AstNode ParseExpression(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C23")]
	[Address(RVA = "0x444D400", Offset = "0x444D400", VA = "0x444D400")]
	private AstNode ParseOrExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C24")]
	[Address(RVA = "0x444D500", Offset = "0x444D500", VA = "0x444D500")]
	private AstNode ParseAndExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C25")]
	[Address(RVA = "0x444D660", Offset = "0x444D660", VA = "0x444D660")]
	private AstNode ParseEqualityExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C26")]
	[Address(RVA = "0x444D740", Offset = "0x444D740", VA = "0x444D740")]
	private AstNode ParseRelationalExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C27")]
	[Address(RVA = "0x444D830", Offset = "0x444D830", VA = "0x444D830")]
	private AstNode ParseAdditiveExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C28")]
	[Address(RVA = "0x444D910", Offset = "0x444D910", VA = "0x444D910")]
	private AstNode ParseMultiplicativeExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C29")]
	[Address(RVA = "0x444DA80", Offset = "0x444DA80", VA = "0x444DA80")]
	private AstNode ParseUnaryExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2A")]
	[Address(RVA = "0x444DB50", Offset = "0x444DB50", VA = "0x444DB50")]
	private AstNode ParseUnionExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2B")]
	[Address(RVA = "0x444DEA0", Offset = "0x444DEA0", VA = "0x444DEA0")]
	private static bool IsNodeType(XPathScanner scaner)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C2C")]
	[Address(RVA = "0x444DCB0", Offset = "0x444DCB0", VA = "0x444DCB0")]
	private AstNode ParsePathExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2D")]
	[Address(RVA = "0x444E000", Offset = "0x444E000", VA = "0x444E000")]
	private AstNode ParseFilterExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2E")]
	[Address(RVA = "0x444E550", Offset = "0x444E550", VA = "0x444E550")]
	private AstNode ParsePredicate(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2F")]
	[Address(RVA = "0x444E160", Offset = "0x444E160", VA = "0x444E160")]
	private AstNode ParseLocationPath(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C30")]
	[Address(RVA = "0x444E0A0", Offset = "0x444E0A0", VA = "0x444E0A0")]
	private AstNode ParseRelativeLocationPath(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C31")]
	[Address(RVA = "0x444E6F0", Offset = "0x444E6F0", VA = "0x444E6F0")]
	private static bool IsStep(XPathScanner.LexKind lexKind)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C32")]
	[Address(RVA = "0x444E720", Offset = "0x444E720", VA = "0x444E720")]
	private AstNode ParseStep(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C33")]
	[Address(RVA = "0x444E950", Offset = "0x444E950", VA = "0x444E950")]
	private AstNode ParseNodeTest(AstNode qyInput, Axis.AxisType axisType, XPathNodeType nodeType)
	{
		return null;
	}

	[Token(Token = "0x6001C34")]
	[Address(RVA = "0x444DF80", Offset = "0x444DF80", VA = "0x444DF80")]
	private static bool IsPrimaryExpr(XPathScanner scanner)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C35")]
	[Address(RVA = "0x444E290", Offset = "0x444E290", VA = "0x444E290")]
	private AstNode ParsePrimaryExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C36")]
	[Address(RVA = "0x444ED30", Offset = "0x444ED30", VA = "0x444ED30")]
	private AstNode ParseMethod(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C37")]
	[Address(RVA = "0x444ECD0", Offset = "0x444ECD0", VA = "0x444ECD0")]
	private void CheckToken(XPathScanner.LexKind t)
	{
	}

	[Token(Token = "0x6001C38")]
	[Address(RVA = "0x444E690", Offset = "0x444E690", VA = "0x444E690")]
	private void PassToken(XPathScanner.LexKind t)
	{
	}

	[Token(Token = "0x6001C39")]
	[Address(RVA = "0x444D640", Offset = "0x444D640", VA = "0x444D640")]
	private void NextLex()
	{
	}

	[Token(Token = "0x6001C3A")]
	[Address(RVA = "0x444D600", Offset = "0x444D600", VA = "0x444D600")]
	private bool TestOp(string op)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C3B")]
	[Address(RVA = "0x444DE50", Offset = "0x444DE50", VA = "0x444DE50")]
	private void CheckNodeSet(XPathResultType t)
	{
	}

	[Token(Token = "0x6001C3C")]
	[Address(RVA = "0x444FA80", Offset = "0x444FA80", VA = "0x444FA80")]
	private static Dictionary<string, ParamInfo> CreateFunctionTable()
	{
		return null;
	}

	[Token(Token = "0x6001C3D")]
	[Address(RVA = "0x4450710", Offset = "0x4450710", VA = "0x4450710")]
	private static Dictionary<string, Axis.AxisType> CreateAxesTable()
	{
		return null;
	}

	[Token(Token = "0x6001C3E")]
	[Address(RVA = "0x444E870", Offset = "0x444E870", VA = "0x444E870")]
	private Axis.AxisType GetAxis()
	{
		return default(Axis.AxisType);
	}
}
