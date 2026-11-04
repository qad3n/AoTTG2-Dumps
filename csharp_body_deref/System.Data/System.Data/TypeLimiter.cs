// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.TypeLimiter
// Update status: NEW in this game update
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
		[Address(RVA = "0x24FFFC0", Offset = "0x24FE5C0", VA = "0x1824FFFC0")]
		internal Scope(Scope? previousScope, IEnumerable<Type> allowedTypes)
		{
		}

		[Token(Token = "0x6000324")]
		[Address(RVA = "0x24FF240", Offset = "0x24FD840", VA = "0x1824FF240", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000325")]
		[Address(RVA = "0x24FF310", Offset = "0x24FD910", VA = "0x1824FF310")]
		public bool IsAllowedType(Type type)
		{
			return default(bool);
		}

		[Token(Token = "0x6000326")]
		[Address(RVA = "0x24FF610", Offset = "0x24FDC10", VA = "0x1824FF610")]
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
		[Address(RVA = "0x2500860", Offset = "0x24FEE60", VA = "0x182500860")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	private TypeLimiter(Scope scope)
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x2500130", Offset = "0x24FE730", VA = "0x182500130")]
	public static TypeLimiter? Capture()
	{
		return null;
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x25001B0", Offset = "0x24FE7B0", VA = "0x1825001B0")]
	public static void EnsureTypeIsAllowed(Type? type, [Optional] TypeLimiter? capturedLimiter)
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x2500250", Offset = "0x24FE850", VA = "0x182500250")]
	public static IDisposable EnterRestrictedScope(DataSet dataSet)
	{
		return null;
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x2500490", Offset = "0x24FEA90", VA = "0x182500490")]
	public static IDisposable EnterRestrictedScope(DataTable dataTable)
	{
		return null;
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x2500700", Offset = "0x24FED00", VA = "0x182500700")]
	private static IEnumerable<Type> GetPreviouslyDeclaredDataTypes(DataTable dataTable)
	{
		return null;
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x25005A0", Offset = "0x24FEBA0", VA = "0x1825005A0")]
	private static IEnumerable<Type> GetPreviouslyDeclaredDataTypes(DataSet dataSet)
	{
		return null;
	}
}
