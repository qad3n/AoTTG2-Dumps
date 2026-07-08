using System.Collections.Generic;
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using UnityEngine.UIElements.StyleSheets.Syntax;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000547")]
internal abstract class BaseStyleMatcher
{
	[Token(Token = "0x2000548")]
	private struct MatchContext
	{
		[Token(Token = "0x4001233")]
		[FieldOffset(Offset = "0x0")]
		public int valueIndex;

		[Token(Token = "0x4001234")]
		[FieldOffset(Offset = "0x4")]
		public int matchedVariableCount;
	}

	[Token(Token = "0x4001230")]
	[FieldOffset(Offset = "0x0")]
	protected static readonly Regex s_CustomIdentRegex;

	[Token(Token = "0x4001231")]
	[FieldOffset(Offset = "0x10")]
	private Stack<MatchContext> m_ContextStack;

	[Token(Token = "0x4001232")]
	[FieldOffset(Offset = "0x18")]
	private MatchContext m_CurrentContext;

	[Token(Token = "0x17000852")]
	public abstract int valueCount
	{
		[Token(Token = "0x6002042")]
		get;
	}

	[Token(Token = "0x17000853")]
	public abstract bool isCurrentVariable
	{
		[Token(Token = "0x6002043")]
		get;
	}

	[Token(Token = "0x17000854")]
	public abstract bool isCurrentComma
	{
		[Token(Token = "0x6002044")]
		get;
	}

	[Token(Token = "0x17000855")]
	public bool hasCurrent
	{
		[Token(Token = "0x6002045")]
		[Address(RVA = "0x4CA6E80", Offset = "0x4CA6E80", VA = "0x4CA6E80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000856")]
	public int currentIndex
	{
		[Token(Token = "0x6002046")]
		[Address(RVA = "0x4CA6EA0", Offset = "0x4CA6EA0", VA = "0x4CA6EA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002047")]
		[Address(RVA = "0x4CA6EB0", Offset = "0x4CA6EB0", VA = "0x4CA6EB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000857")]
	public int matchedVariableCount
	{
		[Token(Token = "0x6002048")]
		[Address(RVA = "0x4CA6EC0", Offset = "0x4CA6EC0", VA = "0x4CA6EC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002049")]
		[Address(RVA = "0x4CA6ED0", Offset = "0x4CA6ED0", VA = "0x4CA6ED0")]
		set
		{
		}
	}

	[Token(Token = "0x6002037")]
	protected abstract bool MatchKeyword(string keyword);

	[Token(Token = "0x6002038")]
	protected abstract bool MatchNumber();

	[Token(Token = "0x6002039")]
	protected abstract bool MatchInteger();

	[Token(Token = "0x600203A")]
	protected abstract bool MatchLength();

	[Token(Token = "0x600203B")]
	protected abstract bool MatchPercentage();

	[Token(Token = "0x600203C")]
	protected abstract bool MatchColor();

	[Token(Token = "0x600203D")]
	protected abstract bool MatchResource();

	[Token(Token = "0x600203E")]
	protected abstract bool MatchUrl();

	[Token(Token = "0x600203F")]
	protected abstract bool MatchTime();

	[Token(Token = "0x6002040")]
	protected abstract bool MatchAngle();

	[Token(Token = "0x6002041")]
	protected abstract bool MatchCustomIdent();

	[Token(Token = "0x600204A")]
	[Address(RVA = "0x4CA6EE0", Offset = "0x4CA6EE0", VA = "0x4CA6EE0")]
	protected void Initialize()
	{
	}

	[Token(Token = "0x600204B")]
	[Address(RVA = "0x4CA6F30", Offset = "0x4CA6F30", VA = "0x4CA6F30")]
	public void MoveNext()
	{
	}

	[Token(Token = "0x600204C")]
	[Address(RVA = "0x4CA6F60", Offset = "0x4CA6F60", VA = "0x4CA6F60")]
	public void SaveContext()
	{
	}

	[Token(Token = "0x600204D")]
	[Address(RVA = "0x4CA6FB0", Offset = "0x4CA6FB0", VA = "0x4CA6FB0")]
	public void RestoreContext()
	{
	}

	[Token(Token = "0x600204E")]
	[Address(RVA = "0x4CA7000", Offset = "0x4CA7000", VA = "0x4CA7000")]
	public void DropContext()
	{
	}

	[Token(Token = "0x600204F")]
	[Address(RVA = "0x4CA7040", Offset = "0x4CA7040", VA = "0x4CA7040")]
	protected bool Match(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002050")]
	[Address(RVA = "0x4CA70E0", Offset = "0x4CA70E0", VA = "0x4CA70E0")]
	private bool MatchExpression(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002051")]
	[Address(RVA = "0x4CA71D0", Offset = "0x4CA71D0", VA = "0x4CA71D0")]
	private bool MatchExpressionWithMultiplier(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002052")]
	[Address(RVA = "0x4CA75E0", Offset = "0x4CA75E0", VA = "0x4CA75E0")]
	private bool MatchGroup(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002053")]
	[Address(RVA = "0x4CA7360", Offset = "0x4CA7360", VA = "0x4CA7360")]
	private bool MatchCombinator(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002054")]
	[Address(RVA = "0x4CA7680", Offset = "0x4CA7680", VA = "0x4CA7680")]
	private bool MatchOr(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002055")]
	[Address(RVA = "0x4CA77C0", Offset = "0x4CA77C0", VA = "0x4CA77C0")]
	private bool MatchOrOr(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002056")]
	[Address(RVA = "0x4CA77D0", Offset = "0x4CA77D0", VA = "0x4CA77D0")]
	private bool MatchAndAnd(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002057")]
	[Address(RVA = "0x4CA7870", Offset = "0x4CA7870", VA = "0x4CA7870")]
	private int MatchMany(Expression exp)
	{
		return default(int);
	}

	[Token(Token = "0x6002058")]
	[Address(RVA = "0x4CA7BF0", Offset = "0x4CA7BF0", VA = "0x4CA7BF0")]
	private unsafe int MatchManyByOrder(Expression exp, int* matchOrder)
	{
		return default(int);
	}

	[Token(Token = "0x6002059")]
	[Address(RVA = "0x4CA7800", Offset = "0x4CA7800", VA = "0x4CA7800")]
	private bool MatchJuxtaposition(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x600205A")]
	[Address(RVA = "0x4CA74C0", Offset = "0x4CA74C0", VA = "0x4CA74C0")]
	private bool MatchDataType(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x600205B")]
	[Address(RVA = "0x4CA7D70", Offset = "0x4CA7D70", VA = "0x4CA7D70")]
	protected BaseStyleMatcher()
	{
	}
}
