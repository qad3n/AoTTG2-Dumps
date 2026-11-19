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
			[Address(RVA = "0x6093A90", Offset = "0x6092A90", VA = "0x6093A90")]
			get
			{
				return default(Function.FunctionType);
			}
		}

		[Token(Token = "0x1700073B")]
		public int Minargs
		{
			[Token(Token = "0x6001C41")]
			[Address(RVA = "0x6093AA0", Offset = "0x6092AA0", VA = "0x6093AA0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700073C")]
		public int Maxargs
		{
			[Token(Token = "0x6001C42")]
			[Address(RVA = "0x6093AB0", Offset = "0x6092AB0", VA = "0x6093AB0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700073D")]
		public XPathResultType[] ArgTypes
		{
			[Token(Token = "0x6001C43")]
			[Address(RVA = "0x6093AC0", Offset = "0x6092AC0", VA = "0x6093AC0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001C44")]
		[Address(RVA = "0x6093460", Offset = "0x6092460", VA = "0x6093460")]
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
	[Address(RVA = "0x608FC40", Offset = "0x608EC40", VA = "0x608FC40")]
	private XPathParser(XPathScanner scanner)
	{
	}

	[Token(Token = "0x6001C21")]
	[Address(RVA = "0x608BEB0", Offset = "0x608AEB0", VA = "0x608BEB0")]
	public static AstNode ParseXPathExpression(string xpathExpression)
	{
		return null;
	}

	[Token(Token = "0x6001C22")]
	[Address(RVA = "0x608FD50", Offset = "0x608ED50", VA = "0x608FD50")]
	private AstNode ParseExpression(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C23")]
	[Address(RVA = "0x608FDA0", Offset = "0x608EDA0", VA = "0x608FDA0")]
	private AstNode ParseOrExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C24")]
	[Address(RVA = "0x608FEA0", Offset = "0x608EEA0", VA = "0x608FEA0")]
	private AstNode ParseAndExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C25")]
	[Address(RVA = "0x6090000", Offset = "0x608F000", VA = "0x6090000")]
	private AstNode ParseEqualityExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C26")]
	[Address(RVA = "0x60902D0", Offset = "0x608F2D0", VA = "0x60902D0")]
	private AstNode ParseRelationalExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C27")]
	[Address(RVA = "0x6090470", Offset = "0x608F470", VA = "0x6090470")]
	private AstNode ParseAdditiveExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C28")]
	[Address(RVA = "0x6090540", Offset = "0x608F540", VA = "0x6090540")]
	private AstNode ParseMultiplicativeExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C29")]
	[Address(RVA = "0x60906B0", Offset = "0x608F6B0", VA = "0x60906B0")]
	private AstNode ParseUnaryExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2A")]
	[Address(RVA = "0x6090780", Offset = "0x608F780", VA = "0x6090780")]
	private AstNode ParseUnionExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2B")]
	[Address(RVA = "0x6090AD0", Offset = "0x608FAD0", VA = "0x6090AD0")]
	private static bool IsNodeType(XPathScanner scaner)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C2C")]
	[Address(RVA = "0x60908E0", Offset = "0x608F8E0", VA = "0x60908E0")]
	private AstNode ParsePathExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2D")]
	[Address(RVA = "0x6090C30", Offset = "0x608FC30", VA = "0x6090C30")]
	private AstNode ParseFilterExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2E")]
	[Address(RVA = "0x6091270", Offset = "0x6090270", VA = "0x6091270")]
	private AstNode ParsePredicate(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C2F")]
	[Address(RVA = "0x6090E90", Offset = "0x608FE90", VA = "0x6090E90")]
	private AstNode ParseLocationPath(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C30")]
	[Address(RVA = "0x6090DD0", Offset = "0x608FDD0", VA = "0x6090DD0")]
	private AstNode ParseRelativeLocationPath(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C31")]
	[Address(RVA = "0x60913F0", Offset = "0x60903F0", VA = "0x60913F0")]
	private static bool IsStep(XPathScanner.LexKind lexKind)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C32")]
	[Address(RVA = "0x6091420", Offset = "0x6090420", VA = "0x6091420")]
	private AstNode ParseStep(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C33")]
	[Address(RVA = "0x6091780", Offset = "0x6090780", VA = "0x6091780")]
	private AstNode ParseNodeTest(AstNode qyInput, Axis.AxisType axisType, XPathNodeType nodeType)
	{
		return null;
	}

	[Token(Token = "0x6001C34")]
	[Address(RVA = "0x6090BB0", Offset = "0x608FBB0", VA = "0x6090BB0")]
	private static bool IsPrimaryExpr(XPathScanner scanner)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C35")]
	[Address(RVA = "0x6090FC0", Offset = "0x608FFC0", VA = "0x6090FC0")]
	private AstNode ParsePrimaryExpr(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C36")]
	[Address(RVA = "0x6091B60", Offset = "0x6090B60", VA = "0x6091B60")]
	private AstNode ParseMethod(AstNode qyInput)
	{
		return null;
	}

	[Token(Token = "0x6001C37")]
	[Address(RVA = "0x6091B00", Offset = "0x6090B00", VA = "0x6091B00")]
	private void CheckToken(XPathScanner.LexKind t)
	{
	}

	[Token(Token = "0x6001C38")]
	[Address(RVA = "0x6091390", Offset = "0x6090390", VA = "0x6091390")]
	private void PassToken(XPathScanner.LexKind t)
	{
	}

	[Token(Token = "0x6001C39")]
	[Address(RVA = "0x608FFE0", Offset = "0x608EFE0", VA = "0x608FFE0")]
	private void NextLex()
	{
	}

	[Token(Token = "0x6001C3A")]
	[Address(RVA = "0x608FFA0", Offset = "0x608EFA0", VA = "0x608FFA0")]
	private bool TestOp(string op)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C3B")]
	[Address(RVA = "0x6090A80", Offset = "0x608FA80", VA = "0x6090A80")]
	private void CheckNodeSet(XPathResultType t)
	{
	}

	[Token(Token = "0x6001C3C")]
	[Address(RVA = "0x6092820", Offset = "0x6091820", VA = "0x6092820")]
	private static Dictionary<string, ParamInfo> CreateFunctionTable()
	{
		return null;
	}

	[Token(Token = "0x6001C3D")]
	[Address(RVA = "0x60934B0", Offset = "0x60924B0", VA = "0x60934B0")]
	private static Dictionary<string, Axis.AxisType> CreateAxesTable()
	{
		return null;
	}

	[Token(Token = "0x6001C3E")]
	[Address(RVA = "0x60916A0", Offset = "0x60906A0", VA = "0x60916A0")]
	private Axis.AxisType GetAxis()
	{
		return default(Axis.AxisType);
	}
}
