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

[Token(Token = "0x200063D")]
internal abstract class BaseStyleMatcher
{
	[Token(Token = "0x200063E")]
	private struct MatchContext
	{
		[Token(Token = "0x40017DB")]
		[FieldOffset(Offset = "0x0")]
		public int valueIndex;

		[Token(Token = "0x40017DC")]
		[FieldOffset(Offset = "0x4")]
		public int matchedVariableCount;
	}

	[Token(Token = "0x40017D8")]
	[FieldOffset(Offset = "0x0")]
	protected static readonly Regex s_CustomIdentRegex;

	[Token(Token = "0x40017D9")]
	[FieldOffset(Offset = "0x10")]
	private Stack<MatchContext> m_ContextStack;

	[Token(Token = "0x40017DA")]
	[FieldOffset(Offset = "0x18")]
	private MatchContext m_CurrentContext;

	[Token(Token = "0x17000B6F")]
	public abstract int valueCount
	{
		[Token(Token = "0x6002DAC")]
		get;
	}

	[Token(Token = "0x17000B70")]
	public abstract bool isCurrentVariable
	{
		[Token(Token = "0x6002DAD")]
		get;
	}

	[Token(Token = "0x17000B71")]
	public abstract bool isCurrentComma
	{
		[Token(Token = "0x6002DAE")]
		get;
	}

	[Token(Token = "0x17000B72")]
	public bool hasCurrent
	{
		[Token(Token = "0x6002DAF")]
		[Address(RVA = "0x6BF80F0", Offset = "0x6BF70F0", VA = "0x6BF80F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B73")]
	public int currentIndex
	{
		[Token(Token = "0x6002DB0")]
		[Address(RVA = "0x6BF8110", Offset = "0x6BF7110", VA = "0x6BF8110")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002DB1")]
		[Address(RVA = "0x6BF8120", Offset = "0x6BF7120", VA = "0x6BF8120")]
		set
		{
		}
	}

	[Token(Token = "0x17000B74")]
	public int matchedVariableCount
	{
		[Token(Token = "0x6002DB2")]
		[Address(RVA = "0x6BF8130", Offset = "0x6BF7130", VA = "0x6BF8130")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002DB3")]
		[Address(RVA = "0x6BF8140", Offset = "0x6BF7140", VA = "0x6BF8140")]
		set
		{
		}
	}

	[Token(Token = "0x6002D9F")]
	protected abstract bool MatchKeyword(string keyword);

	[Token(Token = "0x6002DA0")]
	protected abstract bool MatchNumber(Expression exp);

	[Token(Token = "0x6002DA1")]
	protected abstract bool MatchInteger();

	[Token(Token = "0x6002DA2")]
	protected abstract bool MatchLength();

	[Token(Token = "0x6002DA3")]
	protected abstract bool MatchPercentage();

	[Token(Token = "0x6002DA4")]
	protected abstract bool MatchColor();

	[Token(Token = "0x6002DA5")]
	protected abstract bool MatchResource();

	[Token(Token = "0x6002DA6")]
	protected abstract bool MatchUrl();

	[Token(Token = "0x6002DA7")]
	protected abstract bool MatchTime();

	[Token(Token = "0x6002DA8")]
	protected abstract bool MatchFilterFunction();

	[Token(Token = "0x6002DA9")]
	protected abstract bool MatchMaterialPropertyValue();

	[Token(Token = "0x6002DAA")]
	protected abstract bool MatchAngle();

	[Token(Token = "0x6002DAB")]
	protected abstract bool MatchCustomIdent();

	[Token(Token = "0x6002DB4")]
	[Address(RVA = "0x6BF8150", Offset = "0x6BF7150", VA = "0x6BF8150")]
	protected void Initialize()
	{
	}

	[Token(Token = "0x6002DB5")]
	[Address(RVA = "0x6BF81A0", Offset = "0x6BF71A0", VA = "0x6BF81A0")]
	public void MoveNext()
	{
	}

	[Token(Token = "0x6002DB6")]
	[Address(RVA = "0x6BF81D0", Offset = "0x6BF71D0", VA = "0x6BF81D0")]
	public void SaveContext()
	{
	}

	[Token(Token = "0x6002DB7")]
	[Address(RVA = "0x6BF8220", Offset = "0x6BF7220", VA = "0x6BF8220")]
	public void RestoreContext()
	{
	}

	[Token(Token = "0x6002DB8")]
	[Address(RVA = "0x6BF8270", Offset = "0x6BF7270", VA = "0x6BF8270")]
	public void DropContext()
	{
	}

	[Token(Token = "0x6002DB9")]
	[Address(RVA = "0x6BF82B0", Offset = "0x6BF72B0", VA = "0x6BF82B0")]
	protected bool Match(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DBA")]
	[Address(RVA = "0x6BF8360", Offset = "0x6BF7360", VA = "0x6BF8360")]
	private bool MatchExpression(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DBB")]
	[Address(RVA = "0x6BF8450", Offset = "0x6BF7450", VA = "0x6BF8450")]
	private bool MatchExpressionWithMultiplier(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DBC")]
	[Address(RVA = "0x6BF88F0", Offset = "0x6BF78F0", VA = "0x6BF88F0")]
	private bool MatchGroup(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DBD")]
	[Address(RVA = "0x6BF8600", Offset = "0x6BF7600", VA = "0x6BF8600")]
	private bool MatchCombinator(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DBE")]
	[Address(RVA = "0x6BF8990", Offset = "0x6BF7990", VA = "0x6BF8990")]
	private bool MatchOr(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DBF")]
	[Address(RVA = "0x6BF8AC0", Offset = "0x6BF7AC0", VA = "0x6BF8AC0")]
	private bool MatchOrOr(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DC0")]
	[Address(RVA = "0x6BF8AD0", Offset = "0x6BF7AD0", VA = "0x6BF8AD0")]
	private bool MatchAndAnd(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DC1")]
	[Address(RVA = "0x6BF8B70", Offset = "0x6BF7B70", VA = "0x6BF8B70")]
	private int MatchMany(Expression exp)
	{
		return default(int);
	}

	[Token(Token = "0x6002DC2")]
	[Address(RVA = "0x6BF8F00", Offset = "0x6BF7F00", VA = "0x6BF8F00")]
	private unsafe int MatchManyByOrder(Expression exp, int* matchOrder)
	{
		return default(int);
	}

	[Token(Token = "0x6002DC3")]
	[Address(RVA = "0x6BF8B00", Offset = "0x6BF7B00", VA = "0x6BF8B00")]
	private bool MatchJuxtaposition(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DC4")]
	[Address(RVA = "0x6BF8790", Offset = "0x6BF7790", VA = "0x6BF8790")]
	private bool MatchDataType(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DC5")]
	[Address(RVA = "0x6BF9090", Offset = "0x6BF8090", VA = "0x6BF9090")]
	protected BaseStyleMatcher()
	{
	}
}
