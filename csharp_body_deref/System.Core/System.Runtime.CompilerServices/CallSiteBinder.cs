// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.CallSiteBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq.Expressions;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x200024F")]
public abstract class CallSiteBinder
{
	[Token(Token = "0x2000250")]
	private sealed class LambdaSignature<T> where T : class
	{
		[Token(Token = "0x400043E")]
		[FieldOffset(Offset = "0x0")]
		private static LambdaSignature<T> s_instance;

		[Token(Token = "0x400043F")]
		[FieldOffset(Offset = "0x0")]
		internal readonly ReadOnlyCollection<ParameterExpression> Parameters;

		[Token(Token = "0x4000440")]
		[FieldOffset(Offset = "0x0")]
		internal readonly LabelTarget ReturnLabel;

		[Token(Token = "0x17000250")]
		internal static LambdaSignature<T> Instance
		{
			[Token(Token = "0x6000B64")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B65")]
		private LambdaSignature()
		{
		}
	}

	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x10")]
	internal Dictionary<Type, object> Cache;

	[Token(Token = "0x1700024F")]
	public static LabelTarget UpdateLabel
	{
		[Token(Token = "0x6000B5C")]
		[Address(RVA = "0x2467220", Offset = "0x2465820", VA = "0x182467220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected CallSiteBinder()
	{
	}

	[Token(Token = "0x6000B5D")]
	public abstract Expression Bind(object[] args, ReadOnlyCollection<ParameterExpression> parameters, LabelTarget returnLabel);

	[Token(Token = "0x6000B5E")]
	public virtual T BindDelegate<T>(CallSite<T> site, object[] args) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000B5F")]
	internal T BindCore<T>(CallSite<T> site, object[] args) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000B60")]
	protected void CacheTarget<T>(T target) where T : class
	{
	}

	[Token(Token = "0x6000B61")]
	private static Expression<T> Stitch<T>(Expression binding, LambdaSignature<T> signature) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000B62")]
	internal RuleCache<T> GetRuleCache<T>() where T : class
	{
		return null;
	}
}
