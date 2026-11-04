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
			[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
			get
			{
				return default(Function.FunctionType);
			}
		}

		[Token(Token = "0x1700073B")]
		public int Minargs
		{
			[Token(Token = "0x6001C41")]
			[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700073C")]
		public int Maxargs
		{
			[Token(Token = "0x6001C42")]
			[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700073D")]
		public XPathResultType[] ArgTypes
		{
			[Token(Token = "0x6001C43")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001C44")]
		[Address(RVA = "0x26CEC00", Offset = "0x26CD200", VA = "0x1826CEC00")]
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
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	private XPathParser(XPathScanner scanner)
	{
	}

	[Token(Token = "0x6001C21")]
	[Address(RVA = "0x26DDA20", Offset = "0x26DC020", VA = "0x1826DDA20")]
	public static AstNode ParseXPathExpression(string xpathExpression)
	{
		return null;
	}

	[Token(Token = "0x6001C22")]
	[Address(RVA = "0x26DB940", Offset = "0x26D9F40", VA = "0x1826DB940")]
	private AstNode ParseExpression(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C23")]
	[Address(RVA = "0x26DCA30", Offset = "0x26DB030", VA = "0x1826DCA30")]
	private AstNode ParseOrExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C24")]
	[Address(RVA = "0x26DB6F0", Offset = "0x26D9CF0", VA = "0x1826DB6F0")]
	private AstNode ParseAndExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C25")]
	[Address(RVA = "0x26DB830", Offset = "0x26D9E30", VA = "0x1826DB830")]
	private AstNode ParseEqualityExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C26")]
	[Address(RVA = "0x26DD2D0", Offset = "0x26DB8D0", VA = "0x1826DD2D0")]
	private AstNode ParseRelationalExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C27")]
	[Address(RVA = "0x26DB5E0", Offset = "0x26D9BE0", VA = "0x1826DB5E0")]
	private AstNode ParseAdditiveExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C28")]
	[Address(RVA = "0x26DC490", Offset = "0x26DAA90", VA = "0x1826DC490")]
	private AstNode ParseMultiplicativeExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C29")]
	[Address(RVA = "0x26DD740", Offset = "0x26DBD40", VA = "0x1826DD740")]
	private AstNode ParseUnaryExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2A")]
	[Address(RVA = "0x26DD840", Offset = "0x26DBE40", VA = "0x1826DD840")]
	private AstNode ParseUnionExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2B")]
	[Address(RVA = "0x26DB430", Offset = "0x26D9A30", VA = "0x1826DB430")]
	private static bool IsNodeType(XPathScanner scaner)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C2C")]
	[Address(RVA = "0x26DCB70", Offset = "0x26DB170", VA = "0x1826DCB70")]
	private AstNode ParsePathExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2D")]
	[Address(RVA = "0x26DBAD0", Offset = "0x26DA0D0", VA = "0x1826DBAD0")]
	private AstNode ParseFilterExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2E")]
	[Address(RVA = "0x26DCE70", Offset = "0x26DB470", VA = "0x1826DCE70")]
	private AstNode ParsePredicate(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2F")]
	[Address(RVA = "0x26DBB90", Offset = "0x26DA190", VA = "0x1826DBB90")]
	private AstNode ParseLocationPath(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C30")]
	[Address(RVA = "0x26DD400", Offset = "0x26DBA00", VA = "0x1826DD400")]
	private AstNode ParseRelativeLocationPath(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C31")]
	[Address(RVA = "0x26DB590", Offset = "0x26D9B90", VA = "0x1826DB590")]
	private static bool IsStep(XPathScanner.LexKind lexKind)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C32")]
	[Address(RVA = "0x26DD4E0", Offset = "0x26DBAE0", VA = "0x1826DD4E0")]
	private AstNode ParseStep(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C33")]
	[Address(RVA = "0x26DC640", Offset = "0x26DAC40", VA = "0x1826DC640")]
	private AstNode ParseNodeTest(AstNode qyInput, Axis.AxisType axisType, XPathNodeType nodeType)
	{
		return null;
	}

	[Token(Token = "0x6001C34")]
	[Address(RVA = "0x26DB500", Offset = "0x26D9B00", VA = "0x1826DB500")]
	private static bool IsPrimaryExpr(XPathScanner scanner)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C35")]
	[Address(RVA = "0x26DCFF0", Offset = "0x26DB5F0", VA = "0x1826DCFF0")]
	private AstNode ParsePrimaryExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C36")]
	[Address(RVA = "0x26DBCF0", Offset = "0x26DA2F0", VA = "0x1826DBCF0")]
	private AstNode ParseMethod(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C37")]
	[Address(RVA = "0x26DA390", Offset = "0x26D8990", VA = "0x1826DA390")]
	private void CheckToken(XPathScanner.LexKind t)
	{
	}

	[Token(Token = "0x6001C38")]
	[Address(RVA = "0x26DDBD0", Offset = "0x26DC1D0", VA = "0x1826DDBD0")]
	private void PassToken(XPathScanner.LexKind t)
	{
	}

	[Token(Token = "0x6001C39")]
	[Address(RVA = "0x26DB5C0", Offset = "0x26D9BC0", VA = "0x1826DB5C0")]
	private void NextLex()
	{
	}

	[Token(Token = "0x6001C3A")]
	[Address(RVA = "0x26DDC00", Offset = "0x26DC200", VA = "0x1826DDC00")]
	private bool TestOp(string op)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C3B")]
	[Address(RVA = "0x26DA320", Offset = "0x26D8920", VA = "0x1826DA320")]
	private void CheckNodeSet(XPathResultType t)
	{
	}

	[Token(Token = "0x6001C3C")]
	[Address(RVA = "0x26DA690", Offset = "0x26D8C90", VA = "0x1826DA690")]
	private static Dictionary<string, ParamInfo> CreateFunctionTable()
	{
		return null;
	}

	[Token(Token = "0x6001C3D")]
	[Address(RVA = "0x26DA410", Offset = "0x26D8A10", VA = "0x1826DA410")]
	private static Dictionary<string, Axis.AxisType> CreateAxesTable()
	{
		return null;
	}

	[Token(Token = "0x6001C3E")]
	[Address(RVA = "0x26DB340", Offset = "0x26D9940", VA = "0x1826DB340")]
	private Axis.AxisType GetAxis()
	{
		return default(Axis.AxisType);
	}
}
