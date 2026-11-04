// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Gizmos
// Update status: CHANGED in this game update
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
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Gizmos/Gizmos.bindings.h")]
[UnityEngine.Bindings.StaticAccessor("GizmoBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public sealed class Gizmos
{
	[Token(Token = "0x170000AF")]
	public static Color color
	{
		[Token(Token = "0x6000422")]
		[Address(RVA = "0x2EC87C0", Offset = "0x2EC6DC0", VA = "0x182EC87C0")]
		set
		{
		}
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x2EC85F0", Offset = "0x2EC6BF0", VA = "0x182EC85F0")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawLine(Vector3 from, Vector3 to)
	{
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x2EC8730", Offset = "0x2EC6D30", VA = "0x182EC8730")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawWireSphere(Vector3 center, float radius)
	{
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x2EC8690", Offset = "0x2EC6C90", VA = "0x182EC8690")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawSphere(Vector3 center, float radius)
	{
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x2EC8400", Offset = "0x2EC6A00", VA = "0x182EC8400")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawIcon(Vector3 center, string name, [DefaultValue("true")] bool allowScaling, [DefaultValue("Color(255,255,255,255)")] Color tint)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000423")]
	[Address(RVA = "0x2EC85A0", Offset = "0x2EC6BA0", VA = "0x182EC85A0")]
	private static extern void DrawLine_Injected([In] ref Vector3 from, [In] ref Vector3 to);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000424")]
	[Address(RVA = "0x2EC86E0", Offset = "0x2EC6CE0", VA = "0x182EC86E0")]
	private static extern void DrawWireSphere_Injected([In] ref Vector3 center, float radius);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000425")]
	[Address(RVA = "0x2EC8640", Offset = "0x2EC6C40", VA = "0x182EC8640")]
	private static extern void DrawSphere_Injected([In] ref Vector3 center, float radius);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000426")]
	[Address(RVA = "0x2EC83B0", Offset = "0x2EC69B0", VA = "0x182EC83B0")]
	private static extern void DrawIcon_Injected([In] ref Vector3 center, ref ManagedSpanWrapper name, [DefaultValue("true")] bool allowScaling, [In][DefaultValue("Color(255,255,255,255)")] ref Color tint);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000427")]
	[Address(RVA = "0x2EC8780", Offset = "0x2EC6D80", VA = "0x182EC8780")]
	private static extern void set_color_Injected([In] ref Color value);
}
