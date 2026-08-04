// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4FCE7B0", Offset = "0x4FCE7B0", VA = "0x4FCE7B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000856")]
	public int currentIndex
	{
		[Token(Token = "0x6002046")]
		[Address(RVA = "0x4FCE7D0", Offset = "0x4FCE7D0", VA = "0x4FCE7D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002047")]
		[Address(RVA = "0x4FCE7E0", Offset = "0x4FCE7E0", VA = "0x4FCE7E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000857")]
	public int matchedVariableCount
	{
		[Token(Token = "0x6002048")]
		[Address(RVA = "0x4FCE7F0", Offset = "0x4FCE7F0", VA = "0x4FCE7F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002049")]
		[Address(RVA = "0x4FCE800", Offset = "0x4FCE800", VA = "0x4FCE800")]
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
	[Address(RVA = "0x4FCE810", Offset = "0x4FCE810", VA = "0x4FCE810")]
	protected void Initialize()
	{
	}

	[Token(Token = "0x600204B")]
	[Address(RVA = "0x4FCE860", Offset = "0x4FCE860", VA = "0x4FCE860")]
	public void MoveNext()
	{
	}

	[Token(Token = "0x600204C")]
	[Address(RVA = "0x4FCE890", Offset = "0x4FCE890", VA = "0x4FCE890")]
	public void SaveContext()
	{
	}

	[Token(Token = "0x600204D")]
	[Address(RVA = "0x4FCE8E0", Offset = "0x4FCE8E0", VA = "0x4FCE8E0")]
	public void RestoreContext()
	{
	}

	[Token(Token = "0x600204E")]
	[Address(RVA = "0x4FCE930", Offset = "0x4FCE930", VA = "0x4FCE930")]
	public void DropContext()
	{
	}

	[Token(Token = "0x600204F")]
	[Address(RVA = "0x4FCE970", Offset = "0x4FCE970", VA = "0x4FCE970")]
	protected bool Match(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002050")]
	[Address(RVA = "0x4FCEA10", Offset = "0x4FCEA10", VA = "0x4FCEA10")]
	private bool MatchExpression(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002051")]
	[Address(RVA = "0x4FCEB00", Offset = "0x4FCEB00", VA = "0x4FCEB00")]
	private bool MatchExpressionWithMultiplier(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002052")]
	[Address(RVA = "0x4FCEF10", Offset = "0x4FCEF10", VA = "0x4FCEF10")]
	private bool MatchGroup(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002053")]
	[Address(RVA = "0x4FCEC90", Offset = "0x4FCEC90", VA = "0x4FCEC90")]
	private bool MatchCombinator(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002054")]
	[Address(RVA = "0x4FCEFB0", Offset = "0x4FCEFB0", VA = "0x4FCEFB0")]
	private bool MatchOr(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002055")]
	[Address(RVA = "0x4FCF0F0", Offset = "0x4FCF0F0", VA = "0x4FCF0F0")]
	private bool MatchOrOr(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002056")]
	[Address(RVA = "0x4FCF100", Offset = "0x4FCF100", VA = "0x4FCF100")]
	private bool MatchAndAnd(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002057")]
	[Address(RVA = "0x4FCF1A0", Offset = "0x4FCF1A0", VA = "0x4FCF1A0")]
	private int MatchMany(Expression exp)
	{
		return default(int);
	}

	[Token(Token = "0x6002058")]
	[Address(RVA = "0x4FCF520", Offset = "0x4FCF520", VA = "0x4FCF520")]
	private unsafe int MatchManyByOrder(Expression exp, int* matchOrder)
	{
		return default(int);
	}

	[Token(Token = "0x6002059")]
	[Address(RVA = "0x4FCF130", Offset = "0x4FCF130", VA = "0x4FCF130")]
	private bool MatchJuxtaposition(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x600205A")]
	[Address(RVA = "0x4FCEDF0", Offset = "0x4FCEDF0", VA = "0x4FCEDF0")]
	private bool MatchDataType(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x600205B")]
	[Address(RVA = "0x4FCF6A0", Offset = "0x4FCF6A0", VA = "0x4FCF6A0")]
	protected BaseStyleMatcher()
	{
	}
}
