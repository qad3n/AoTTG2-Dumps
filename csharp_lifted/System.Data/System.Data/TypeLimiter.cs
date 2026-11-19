// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.TypeLimiter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200001F")]
internal sealed class TypeLimiter
{
	[Token(Token = "0x2000020")]
	private sealed class Scope : IDisposable
	{
		[Token(Token = "0x40000D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly HashSet<Type> s_allowedTypes;

		[Token(Token = "0x40000D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private HashSet<Type> m_allowedTypes;

		[Token(Token = "0x40000D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private readonly Scope? m_previousScope;

		[Token(Token = "0x6000323")]
		[Address(RVA = "0x5E894F0", Offset = "0x5E884F0", VA = "0x5E894F0")]
		internal Scope(Scope? previousScope, IEnumerable<Type> allowedTypes)
		{
		}

		[Token(Token = "0x6000324")]
		[Address(RVA = "0x5E89980", Offset = "0x5E88980", VA = "0x5E89980", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000325")]
		[Address(RVA = "0x5E89060", Offset = "0x5E88060", VA = "0x5E89060")]
		public bool IsAllowedType(Type type)
		{
			return default(bool);
		}

		[Token(Token = "0x6000326")]
		[Address(RVA = "0x5E89A50", Offset = "0x5E88A50", VA = "0x5E89A50")]
		private static bool IsTypeUnconditionallyAllowed(Type type)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x40000D3")]
	[ThreadStatic]
	private static Scope? s_activeScope;

	[Token(Token = "0x40000D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Scope m_instanceScope;

	[Token(Token = "0x17000076")]
	private static bool IsTypeLimitingDisabled
	{
		[Token(Token = "0x600031C")]
		[Address(RVA = "0x5E88F00", Offset = "0x5E87F00", VA = "0x5E88F00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x5E88ED0", Offset = "0x5E87ED0", VA = "0x5E88ED0")]
	private TypeLimiter(Scope scope)
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x5E88F60", Offset = "0x5E87F60", VA = "0x5E88F60")]
	public static TypeLimiter? Capture()
	{
		return null;
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x5E88FD0", Offset = "0x5E87FD0", VA = "0x5E88FD0")]
	public static void EnsureTypeIsAllowed(Type? type, [Optional] TypeLimiter? capturedLimiter)
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x5E891F0", Offset = "0x5E881F0", VA = "0x5E891F0")]
	public static IDisposable EnterRestrictedScope(DataSet dataSet)
	{
		return null;
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x5E89680", Offset = "0x5E88680", VA = "0x5E89680")]
	public static IDisposable EnterRestrictedScope(DataTable dataTable)
	{
		return null;
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x5E89780", Offset = "0x5E88780", VA = "0x5E89780")]
	private static IEnumerable<Type> GetPreviouslyDeclaredDataTypes(DataTable dataTable)
	{
		return null;
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x5E892F0", Offset = "0x5E882F0", VA = "0x5E892F0")]
	private static IEnumerable<Type> GetPreviouslyDeclaredDataTypes(DataSet dataSet)
	{
		return null;
	}
}
