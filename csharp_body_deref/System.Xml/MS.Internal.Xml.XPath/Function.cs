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
		[Address(RVA = "0x443EDF0", Offset = "0x443EDF0", VA = "0x443EDF0", Slot = "4")]
		get
		{
			return default(AstType);
		}
	}

	[Token(Token = "0x170006FE")]
	public override XPathResultType ReturnType
	{
		[Token(Token = "0x6001B08")]
		[Address(RVA = "0x443EE00", Offset = "0x443EE00", VA = "0x443EE00", Slot = "5")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x170006FF")]
	public FunctionType TypeOfFunction
	{
		[Token(Token = "0x6001B09")]
		[Address(RVA = "0x443EE90", Offset = "0x443EE90", VA = "0x443EE90")]
		get
		{
			return default(FunctionType);
		}
	}

	[Token(Token = "0x17000700")]
	public List<AstNode> ArgumentList
	{
		[Token(Token = "0x6001B0A")]
		[Address(RVA = "0x443EEA0", Offset = "0x443EEA0", VA = "0x443EEA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000701")]
	public string Prefix
	{
		[Token(Token = "0x6001B0B")]
		[Address(RVA = "0x443EEB0", Offset = "0x443EEB0", VA = "0x443EEB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000702")]
	public string Name
	{
		[Token(Token = "0x6001B0C")]
		[Address(RVA = "0x443EEC0", Offset = "0x443EEC0", VA = "0x443EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B04")]
	[Address(RVA = "0x443EBC0", Offset = "0x443EBC0", VA = "0x443EBC0")]
	public Function(FunctionType ftype, List<AstNode> argumentList)
	{
	}

	[Token(Token = "0x6001B05")]
	[Address(RVA = "0x443EC40", Offset = "0x443EC40", VA = "0x443EC40")]
	public Function(string prefix, string name, List<AstNode> argumentList)
	{
	}

	[Token(Token = "0x6001B06")]
	[Address(RVA = "0x443ED00", Offset = "0x443ED00", VA = "0x443ED00")]
	public Function(FunctionType ftype, AstNode arg)
	{
	}
}
