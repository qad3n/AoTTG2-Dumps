// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Time
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IntegerTime;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20001DA")]
[UnityEngine.Bindings.StaticAccessor("GetTimeManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/TimeManager.h")]
public class Time
{
	[Token(Token = "0x17000281")]
	[UnityEngine.Bindings.NativeProperty("CurTime")]
	public static extern float time
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F9F")]
		[Address(RVA = "0x6927800", Offset = "0x6926800", VA = "0x6927800")]
		get;
	}

	[Token(Token = "0x17000282")]
	[UnityEngine.Bindings.NativeProperty("CurTime")]
	public static extern double timeAsDouble
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FA0")]
		[Address(RVA = "0x6927830", Offset = "0x6926830", VA = "0x6927830")]
		get;
	}

	[Token(Token = "0x17000283")]
	[UnityEngine.Bindings.NativeProperty("CurTimeRational")]
	public static RationalTime timeAsRational
	{
		[Token(Token = "0x6000FA1")]
		[Address(RVA = "0x6927860", Offset = "0x6926860", VA = "0x6927860")]
		get
		{
			return default(RationalTime);
		}
	}

	[Token(Token = "0x17000284")]
	public static extern float deltaTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FA2")]
		[Address(RVA = "0x69278D0", Offset = "0x69268D0", VA = "0x69278D0")]
		get;
	}

	[Token(Token = "0x17000285")]
	public static extern float fixedTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FA3")]
		[Address(RVA = "0x6927900", Offset = "0x6926900", VA = "0x6927900")]
		get;
	}

	[Token(Token = "0x17000286")]
	public static extern float unscaledTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FA4")]
		[Address(RVA = "0x6927930", Offset = "0x6926930", VA = "0x6927930")]
		get;
	}

	[Token(Token = "0x17000287")]
	public static extern float unscaledDeltaTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FA5")]
		[Address(RVA = "0x6927960", Offset = "0x6926960", VA = "0x6927960")]
		get;
	}

	[Token(Token = "0x17000288")]
	public static extern float fixedDeltaTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FA6")]
		[Address(RVA = "0x6927990", Offset = "0x6926990", VA = "0x6927990")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FA7")]
		[Address(RVA = "0x69279C0", Offset = "0x69269C0", VA = "0x69279C0")]
		set;
	}

	[Token(Token = "0x17000289")]
	public static extern float smoothDeltaTime
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FA8")]
		[Address(RVA = "0x6927A00", Offset = "0x6926A00", VA = "0x6927A00")]
		get;
	}

	[Token(Token = "0x1700028A")]
	public static extern float timeScale
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FA9")]
		[Address(RVA = "0x6927A30", Offset = "0x6926A30", VA = "0x6927A30")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FAA")]
		[Address(RVA = "0x6927A60", Offset = "0x6926A60", VA = "0x6927A60")]
		set;
	}

	[Token(Token = "0x1700028B")]
	public static extern int frameCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FAB")]
		[Address(RVA = "0x6927AA0", Offset = "0x6926AA0", VA = "0x6927AA0")]
		get;
	}

	[Token(Token = "0x1700028C")]
	[UnityEngine.Bindings.NativeProperty("RenderFrameCount")]
	public static extern int renderedFrameCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FAC")]
		[Address(RVA = "0x6927AD0", Offset = "0x6926AD0", VA = "0x6927AD0")]
		get;
	}

	[Token(Token = "0x1700028D")]
	[UnityEngine.Bindings.NativeProperty("Realtime")]
	public static extern float realtimeSinceStartup
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FAD")]
		[Address(RVA = "0x6927B00", Offset = "0x6926B00", VA = "0x6927B00")]
		get;
	}

	[Token(Token = "0x1700028E")]
	[UnityEngine.Bindings.NativeProperty("Realtime")]
	public static extern double realtimeSinceStartupAsDouble
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FAE")]
		[Address(RVA = "0x6927B30", Offset = "0x6926B30", VA = "0x6927B30")]
		get;
	}

	[Token(Token = "0x1700028F")]
	public static extern bool inFixedTimeStep
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FAF")]
		[Address(RVA = "0x6927B60", Offset = "0x6926B60", VA = "0x6927B60")]
		[UnityEngine.Bindings.NativeName("IsUsingFixedTimeStep")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x69278A0", Offset = "0x69268A0", VA = "0x69278A0")]
	private static extern void get_timeAsRational_Injected(out RationalTime ret);
}
