// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.XPathParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x478E450", Offset = "0x478E450", VA = "0x478E450")]
			get
			{
				return default(Function.FunctionType);
			}
		}

		[Token(Token = "0x1700073B")]
		public int Minargs
		{
			[Token(Token = "0x6001C41")]
			[Address(RVA = "0x478E460", Offset = "0x478E460", VA = "0x478E460")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700073C")]
		public int Maxargs
		{
			[Token(Token = "0x6001C42")]
			[Address(RVA = "0x478E470", Offset = "0x478E470", VA = "0x478E470")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700073D")]
		public XPathResultType[] ArgTypes
		{
			[Token(Token = "0x6001C43")]
			[Address(RVA = "0x478E480", Offset = "0x478E480", VA = "0x478E480")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001C44")]
		[Address(RVA = "0x478DE20", Offset = "0x478DE20", VA = "0x478DE20")]
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
	[Address(RVA = "0x478AA00", Offset = "0x478AA00", VA = "0x478AA00")]
	private XPathParser(XPathScanner scanner)
	{
	}

	[Token(Token = "0x6001C21")]
	[Address(RVA = "0x4786A70", Offset = "0x4786A70", VA = "0x4786A70")]
	public static AstNode ParseXPathExpression(string xpathExpression)
	{
		return null;
	}

	[Token(Token = "0x6001C22")]
	[Address(RVA = "0x478AB10", Offset = "0x478AB10", VA = "0x478AB10")]
	private AstNode ParseExpression(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C23")]
	[Address(RVA = "0x478AB60", Offset = "0x478AB60", VA = "0x478AB60")]
	private AstNode ParseOrExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C24")]
	[Address(RVA = "0x478AC60", Offset = "0x478AC60", VA = "0x478AC60")]
	private AstNode ParseAndExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C25")]
	[Address(RVA = "0x478ADC0", Offset = "0x478ADC0", VA = "0x478ADC0")]
	private AstNode ParseEqualityExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C26")]
	[Address(RVA = "0x478AEA0", Offset = "0x478AEA0", VA = "0x478AEA0")]
	private AstNode ParseRelationalExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C27")]
	[Address(RVA = "0x478AF90", Offset = "0x478AF90", VA = "0x478AF90")]
	private AstNode ParseAdditiveExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C28")]
	[Address(RVA = "0x478B070", Offset = "0x478B070", VA = "0x478B070")]
	private AstNode ParseMultiplicativeExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C29")]
	[Address(RVA = "0x478B1E0", Offset = "0x478B1E0", VA = "0x478B1E0")]
	private AstNode ParseUnaryExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2A")]
	[Address(RVA = "0x478B2B0", Offset = "0x478B2B0", VA = "0x478B2B0")]
	private AstNode ParseUnionExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2B")]
	[Address(RVA = "0x478B600", Offset = "0x478B600", VA = "0x478B600")]
	private static bool IsNodeType(XPathScanner scaner)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C2C")]
	[Address(RVA = "0x478B410", Offset = "0x478B410", VA = "0x478B410")]
	private AstNode ParsePathExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2D")]
	[Address(RVA = "0x478B760", Offset = "0x478B760", VA = "0x478B760")]
	private AstNode ParseFilterExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2E")]
	[Address(RVA = "0x478BCB0", Offset = "0x478BCB0", VA = "0x478BCB0")]
	private AstNode ParsePredicate(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2F")]
	[Address(RVA = "0x478B8C0", Offset = "0x478B8C0", VA = "0x478B8C0")]
	private AstNode ParseLocationPath(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C30")]
	[Address(RVA = "0x478B800", Offset = "0x478B800", VA = "0x478B800")]
	private AstNode ParseRelativeLocationPath(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C31")]
	[Address(RVA = "0x478BE50", Offset = "0x478BE50", VA = "0x478BE50")]
	private static bool IsStep(XPathScanner.LexKind lexKind)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C32")]
	[Address(RVA = "0x478BE80", Offset = "0x478BE80", VA = "0x478BE80")]
	private AstNode ParseStep(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C33")]
	[Address(RVA = "0x478C0B0", Offset = "0x478C0B0", VA = "0x478C0B0")]
	private AstNode ParseNodeTest(AstNode qyInput, Axis.AxisType axisType, XPathNodeType nodeType)
	{
		return null;
	}

	[Token(Token = "0x6001C34")]
	[Address(RVA = "0x478B6E0", Offset = "0x478B6E0", VA = "0x478B6E0")]
	private static bool IsPrimaryExpr(XPathScanner scanner)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C35")]
	[Address(RVA = "0x478B9F0", Offset = "0x478B9F0", VA = "0x478B9F0")]
	private AstNode ParsePrimaryExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C36")]
	[Address(RVA = "0x478C490", Offset = "0x478C490", VA = "0x478C490")]
	private AstNode ParseMethod(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C37")]
	[Address(RVA = "0x478C430", Offset = "0x478C430", VA = "0x478C430")]
	private void CheckToken(XPathScanner.LexKind t)
	{
	}

	[Token(Token = "0x6001C38")]
	[Address(RVA = "0x478BDF0", Offset = "0x478BDF0", VA = "0x478BDF0")]
	private void PassToken(XPathScanner.LexKind t)
	{
	}

	[Token(Token = "0x6001C39")]
	[Address(RVA = "0x478ADA0", Offset = "0x478ADA0", VA = "0x478ADA0")]
	private void NextLex()
	{
	}

	[Token(Token = "0x6001C3A")]
	[Address(RVA = "0x478AD60", Offset = "0x478AD60", VA = "0x478AD60")]
	private bool TestOp(string op)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C3B")]
	[Address(RVA = "0x478B5B0", Offset = "0x478B5B0", VA = "0x478B5B0")]
	private void CheckNodeSet(XPathResultType t)
	{
	}

	[Token(Token = "0x6001C3C")]
	[Address(RVA = "0x478D1E0", Offset = "0x478D1E0", VA = "0x478D1E0")]
	private static Dictionary<string, ParamInfo> CreateFunctionTable()
	{
		return null;
	}

	[Token(Token = "0x6001C3D")]
	[Address(RVA = "0x478DE70", Offset = "0x478DE70", VA = "0x478DE70")]
	private static Dictionary<string, Axis.AxisType> CreateAxesTable()
	{
		return null;
	}

	[Token(Token = "0x6001C3E")]
	[Address(RVA = "0x478BFD0", Offset = "0x478BFD0", VA = "0x478BFD0")]
	private Axis.AxisType GetAxis()
	{
		return default(Axis.AxisType);
	}
}
