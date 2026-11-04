// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Time
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IntegerTime;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20001D9")]
[UnityEngine.Bindings.StaticAccessor("GetTimeManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/TimeManager.h")]
public class Time
{
	[Token(Token = "0x1700027A")]
	[UnityEngine.Bindings.NativeProperty("CurTime")]
	public static extern float time
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F89")]
		[Address(RVA = "0x2F29860", Offset = "0x2F27E60", VA = "0x182F29860")]
		get;
	}

	[Token(Token = "0x1700027B")]
	[UnityEngine.Bindings.NativeProperty("CurTime")]
	public static extern double timeAsDouble
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F8A")]
		[Address(RVA = "0x2F29780", Offset = "0x2F27D80", VA = "0x182F29780")]
		get;
	}

	[Token(Token = "0x1700027C")]
	[UnityEngine.Bindings.NativeProperty("CurTimeRational")]
	public static RationalTime timeAsRational
	{
		[Token(Token = "0x6000F8B")]
		[Address(RVA = "0x2F297F0", Offset = "0x2F27DF0", VA = "0x182F297F0")]
		get
		{
			return default(RationalTime);
		}
	}

	[Token(Token = "0x1700027D")]
	public static extern float deltaTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F8C")]
		[Address(RVA = "0x2F295D0", Offset = "0x2F27BD0", VA = "0x182F295D0")]
		get;
	}

	[Token(Token = "0x1700027E")]
	public static extern float fixedTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F8D")]
		[Address(RVA = "0x2F29630", Offset = "0x2F27C30", VA = "0x182F29630")]
		get;
	}

	[Token(Token = "0x1700027F")]
	public static extern float unscaledTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F8E")]
		[Address(RVA = "0x2F298C0", Offset = "0x2F27EC0", VA = "0x182F298C0")]
		get;
	}

	[Token(Token = "0x17000280")]
	public static extern float unscaledDeltaTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F8F")]
		[Address(RVA = "0x2F29890", Offset = "0x2F27E90", VA = "0x182F29890")]
		get;
	}

	[Token(Token = "0x17000281")]
	public static extern float fixedDeltaTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F90")]
		[Address(RVA = "0x2F29600", Offset = "0x2F27C00", VA = "0x182F29600")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F91")]
		[Address(RVA = "0x2F298F0", Offset = "0x2F27EF0", VA = "0x182F298F0")]
		set;
	}

	[Token(Token = "0x17000282")]
	public static extern float smoothDeltaTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F92")]
		[Address(RVA = "0x2F29750", Offset = "0x2F27D50", VA = "0x182F29750")]
		get;
	}

	[Token(Token = "0x17000283")]
	public static extern float timeScale
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F93")]
		[Address(RVA = "0x2F29830", Offset = "0x2F27E30", VA = "0x182F29830")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F94")]
		[Address(RVA = "0x2F29930", Offset = "0x2F27F30", VA = "0x182F29930")]
		set;
	}

	[Token(Token = "0x17000284")]
	public static extern int frameCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F95")]
		[Address(RVA = "0x2F29660", Offset = "0x2F27C60", VA = "0x182F29660")]
		get;
	}

	[Token(Token = "0x17000285")]
	[UnityEngine.Bindings.NativeProperty("RenderFrameCount")]
	public static extern int renderedFrameCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F96")]
		[Address(RVA = "0x2F29720", Offset = "0x2F27D20", VA = "0x182F29720")]
		get;
	}

	[Token(Token = "0x17000286")]
	[UnityEngine.Bindings.NativeProperty("Realtime")]
	public static extern float realtimeSinceStartup
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F97")]
		[Address(RVA = "0x2F296F0", Offset = "0x2F27CF0", VA = "0x182F296F0")]
		get;
	}

	[Token(Token = "0x17000287")]
	[UnityEngine.Bindings.NativeProperty("Realtime")]
	public static extern double realtimeSinceStartupAsDouble
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F98")]
		[Address(RVA = "0x2F296C0", Offset = "0x2F27CC0", VA = "0x182F296C0")]
		get;
	}

	[Token(Token = "0x17000288")]
	public static extern bool inFixedTimeStep
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F99")]
		[Address(RVA = "0x2F29690", Offset = "0x2F27C90", VA = "0x182F29690")]
		[UnityEngine.Bindings.NativeName("IsUsingFixedTimeStep")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x2F297B0", Offset = "0x2F27DB0", VA = "0x182F297B0")]
	private static extern void get_timeAsRational_Injected(out RationalTime ret);
}
