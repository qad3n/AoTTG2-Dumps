// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Gizmos
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;

namespace UnityEngine;

[Token(Token = "0x20000C2")]
[UnityEngine.Bindings.StaticAccessor("GizmoBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Gizmos/Gizmos.bindings.h")]
public sealed class Gizmos
{
	[Token(Token = "0x170000B0")]
	public static Color color
	{
		[Token(Token = "0x6000426")]
		[Address(RVA = "0x68CE0B0", Offset = "0x68CD0B0", VA = "0x68CE0B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x68CDD10", Offset = "0x68CCD10", VA = "0x68CDD10")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawLine(Vector3 from, Vector3 to)
	{
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x68CDDA0", Offset = "0x68CCDA0", VA = "0x68CDDA0")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawWireSphere(Vector3 center, float radius)
	{
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x68CDE40", Offset = "0x68CCE40", VA = "0x68CDE40")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawSphere(Vector3 center, float radius)
	{
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x68CDEE0", Offset = "0x68CCEE0", VA = "0x68CDEE0")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawIcon(Vector3 center, string name, [DefaultValue("true")] bool allowScaling, [DefaultValue("Color(255,255,255,255)")] Color tint)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000427")]
	[Address(RVA = "0x68CDD60", Offset = "0x68CCD60", VA = "0x68CDD60")]
	private static extern void DrawLine_Injected([In] ref Vector3 from, [In] ref Vector3 to);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000428")]
	[Address(RVA = "0x68CDDF0", Offset = "0x68CCDF0", VA = "0x68CDDF0")]
	private static extern void DrawWireSphere_Injected([In] ref Vector3 center, float radius);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000429")]
	[Address(RVA = "0x68CDE90", Offset = "0x68CCE90", VA = "0x68CDE90")]
	private static extern void DrawSphere_Injected([In] ref Vector3 center, float radius);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600042A")]
	[Address(RVA = "0x68CE060", Offset = "0x68CD060", VA = "0x68CE060")]
	private static extern void DrawIcon_Injected([In] ref Vector3 center, ref ManagedSpanWrapper name, [DefaultValue("true")] bool allowScaling, [In][DefaultValue("Color(255,255,255,255)")] ref Color tint);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600042B")]
	[Address(RVA = "0x68CE100", Offset = "0x68CD100", VA = "0x68CE100")]
	private static extern void set_color_Injected([In] ref Color value);
}
