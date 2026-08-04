// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.Function
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002A2")]
internal class Function : AstNode
{
	[Token(Token = "0x20002A3")]
	public enum FunctionType
	{
		[Token(Token = "0x4000E34")]
		FuncLast,
		[Token(Token = "0x4000E35")]
		FuncPosition,
		[Token(Token = "0x4000E36")]
		FuncCount,
		[Token(Token = "0x4000E37")]
		FuncID,
		[Token(Token = "0x4000E38")]
		FuncLocalName,
		[Token(Token = "0x4000E39")]
		FuncNameSpaceUri,
		[Token(Token = "0x4000E3A")]
		FuncName,
		[Token(Token = "0x4000E3B")]
		FuncString,
		[Token(Token = "0x4000E3C")]
		FuncBoolean,
		[Token(Token = "0x4000E3D")]
		FuncNumber,
		[Token(Token = "0x4000E3E")]
		FuncTrue,
		[Token(Token = "0x4000E3F")]
		FuncFalse,
		[Token(Token = "0x4000E40")]
		FuncNot,
		[Token(Token = "0x4000E41")]
		FuncConcat,
		[Token(Token = "0x4000E42")]
		FuncStartsWith,
		[Token(Token = "0x4000E43")]
		FuncContains,
		[Token(Token = "0x4000E44")]
		FuncSubstringBefore,
		[Token(Token = "0x4000E45")]
		FuncSubstringAfter,
		[Token(Token = "0x4000E46")]
		FuncSubstring,
		[Token(Token = "0x4000E47")]
		FuncStringLength,
		[Token(Token = "0x4000E48")]
		FuncNormalize,
		[Token(Token = "0x4000E49")]
		FuncTranslate,
		[Token(Token = "0x4000E4A")]
		FuncLang,
		[Token(Token = "0x4000E4B")]
		FuncSum,
		[Token(Token = "0x4000E4C")]
		FuncFloor,
		[Token(Token = "0x4000E4D")]
		FuncCeiling,
		[Token(Token = "0x4000E4E")]
		FuncRound,
		[Token(Token = "0x4000E4F")]
		FuncUserDefined
	}

	[Token(Token = "0x4000E2E")]
	[FieldOffset(Offset = "0x10")]
	private FunctionType _functionType;

	[Token(Token = "0x4000E2F")]
	[FieldOffset(Offset = "0x18")]
	private List<AstNode> _argumentList;

	[Token(Token = "0x4000E30")]
	[FieldOffset(Offset = "0x20")]
	private string _name;

	[Token(Token = "0x4000E31")]
	[FieldOffset(Offset = "0x28")]
	private string _prefix;

	[Token(Token = "0x4000E32")]
	[FieldOffset(Offset = "0x0")]
	internal static XPathResultType[] ReturnTypes;

	[Token(Token = "0x170006FD")]
	public override AstType Type
	{
		[Token(Token = "0x6001B07")]
		[Address(RVA = "0x477C550", Offset = "0x477C550", VA = "0x477C550", Slot = "4")]
		get
		{
			return default(AstType);
		}
	}

	[Token(Token = "0x170006FE")]
	public override XPathResultType ReturnType
	{
		[Token(Token = "0x6001B08")]
		[Address(RVA = "0x477C560", Offset = "0x477C560", VA = "0x477C560", Slot = "5")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x170006FF")]
	public FunctionType TypeOfFunction
	{
		[Token(Token = "0x6001B09")]
		[Address(RVA = "0x477C5F0", Offset = "0x477C5F0", VA = "0x477C5F0")]
		get
		{
			return default(FunctionType);
		}
	}

	[Token(Token = "0x17000700")]
	public List<AstNode> ArgumentList
	{
		[Token(Token = "0x6001B0A")]
		[Address(RVA = "0x477C600", Offset = "0x477C600", VA = "0x477C600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000701")]
	public string Prefix
	{
		[Token(Token = "0x6001B0B")]
		[Address(RVA = "0x477C610", Offset = "0x477C610", VA = "0x477C610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000702")]
	public string Name
	{
		[Token(Token = "0x6001B0C")]
		[Address(RVA = "0x477C620", Offset = "0x477C620", VA = "0x477C620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B04")]
	[Address(RVA = "0x477C320", Offset = "0x477C320", VA = "0x477C320")]
	public Function(FunctionType ftype, List<AstNode> argumentList)
	{
	}

	[Token(Token = "0x6001B05")]
	[Address(RVA = "0x477C3A0", Offset = "0x477C3A0", VA = "0x477C3A0")]
	public Function(string prefix, string name, List<AstNode> argumentList)
	{
	}

	[Token(Token = "0x6001B06")]
	[Address(RVA = "0x477C460", Offset = "0x477C460", VA = "0x477C460")]
	public Function(FunctionType ftype, AstNode arg)
	{
	}
}
