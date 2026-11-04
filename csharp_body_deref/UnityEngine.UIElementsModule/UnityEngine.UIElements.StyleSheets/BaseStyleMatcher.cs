// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x31EB860", Offset = "0x31E9E60", VA = "0x1831EB860")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B73")]
	public int currentIndex
	{
		[Token(Token = "0x6002DB0")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002DB1")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000B74")]
	public int matchedVariableCount
	{
		[Token(Token = "0x6002DB2")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002DB3")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
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
	[Address(RVA = "0x31EA620", Offset = "0x31E8C20", VA = "0x1831EA620")]
	protected void Initialize()
	{
	}

	[Token(Token = "0x6002DB5")]
	[Address(RVA = "0x31EB670", Offset = "0x31E9C70", VA = "0x1831EB670")]
	public void MoveNext()
	{
	}

	[Token(Token = "0x6002DB6")]
	[Address(RVA = "0x31EB700", Offset = "0x31E9D00", VA = "0x1831EB700")]
	public void SaveContext()
	{
	}

	[Token(Token = "0x6002DB7")]
	[Address(RVA = "0x31EB6B0", Offset = "0x31E9CB0", VA = "0x1831EB6B0")]
	public void RestoreContext()
	{
	}

	[Token(Token = "0x6002DB8")]
	[Address(RVA = "0x31EA5D0", Offset = "0x31E8BD0", VA = "0x1831EA5D0")]
	public void DropContext()
	{
	}

	[Token(Token = "0x6002DB9")]
	[Address(RVA = "0x31EB4D0", Offset = "0x31E9AD0", VA = "0x1831EB4D0")]
	protected bool Match(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DBA")]
	[Address(RVA = "0x31EAD00", Offset = "0x31E9300", VA = "0x1831EAD00")]
	private bool MatchExpression(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DBB")]
	[Address(RVA = "0x31EABD0", Offset = "0x31E91D0", VA = "0x1831EABD0")]
	private bool MatchExpressionWithMultiplier(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DBC")]
	[Address(RVA = "0x31EAF80", Offset = "0x31E9580", VA = "0x1831EAF80")]
	private bool MatchGroup(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DBD")]
	[Address(RVA = "0x31EA6B0", Offset = "0x31E8CB0", VA = "0x1831EA6B0")]
	private bool MatchCombinator(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DBE")]
	[Address(RVA = "0x31EB3B0", Offset = "0x31E99B0", VA = "0x1831EB3B0")]
	private bool MatchOr(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DBF")]
	[Address(RVA = "0x31EB390", Offset = "0x31E9990", VA = "0x1831EB390")]
	private bool MatchOrOr(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DC0")]
	[Address(RVA = "0x31EA670", Offset = "0x31E8C70", VA = "0x1831EA670")]
	private bool MatchAndAnd(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DC1")]
	[Address(RVA = "0x31EB1F0", Offset = "0x31E97F0", VA = "0x1831EB1F0")]
	private int MatchMany(Expression exp)
	{
		return default(int);
	}

	[Token(Token = "0x6002DC2")]
	[Address(RVA = "0x31EB0B0", Offset = "0x31E96B0", VA = "0x1831EB0B0")]
	private unsafe int MatchManyByOrder(Expression exp, int* matchOrder)
	{
		return default(int);
	}

	[Token(Token = "0x6002DC3")]
	[Address(RVA = "0x31EB030", Offset = "0x31E9630", VA = "0x1831EB030")]
	private bool MatchJuxtaposition(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DC4")]
	[Address(RVA = "0x31EA9E0", Offset = "0x31E8FE0", VA = "0x1831EA9E0")]
	private bool MatchDataType(Expression exp)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DC5")]
	[Address(RVA = "0x31EB7E0", Offset = "0x31E9DE0", VA = "0x1831EB7E0")]
	protected BaseStyleMatcher()
	{
	}
}
