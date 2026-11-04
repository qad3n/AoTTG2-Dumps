// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LODGroup
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200011F")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/LOD/LODGroupManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/LOD/LODGroup.h")]
[UnityEngine.Bindings.StaticAccessor("GetLODGroupManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/LOD/LODUtility.h")]
public class LODGroup : Component
{
	[Token(Token = "0x1700014F")]
	public Vector3 localReferencePoint
	{
		[Token(Token = "0x600073E")]
		[Address(RVA = "0x2EDB910", Offset = "0x2ED9F10", VA = "0x182EDB910")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000150")]
	public float size
	{
		[Token(Token = "0x600073F")]
		[Address(RVA = "0x2EDB9F0", Offset = "0x2ED9FF0", VA = "0x182EDB9F0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000151")]
	public LODFadeMode fadeMode
	{
		[Token(Token = "0x6000740")]
		[Address(RVA = "0x2EDBB90", Offset = "0x2EDA190", VA = "0x182EDBB90")]
		set
		{
		}
	}

	[Token(Token = "0x17000152")]
	public bool animateCrossFading
	{
		[Token(Token = "0x6000741")]
		[Address(RVA = "0x2EDBAC0", Offset = "0x2EDA0C0", VA = "0x182EDBAC0")]
		set
		{
		}
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x2EDB760", Offset = "0x2ED9D60", VA = "0x182EDB760")]
	[UnityEngine.Bindings.FreeFunction("UpdateLODGroupBoundingBox", HasExplicitThis = true)]
	public void RecalculateBounds()
	{
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x2EDB6A0", Offset = "0x2ED9CA0", VA = "0x182EDB6A0")]
	[UnityEngine.Bindings.FreeFunction("GetLODs_Binding", HasExplicitThis = true)]
	public LOD[] GetLODs()
	{
		return null;
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x2EDB830", Offset = "0x2ED9E30", VA = "0x182EDB830")]
	[UnityEngine.Bindings.FreeFunction("SetLODs_Binding", HasExplicitThis = true)]
	public void SetLODs([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] LOD[] lods)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000745")]
	[Address(RVA = "0x2EDB8C0", Offset = "0x2ED9EC0", VA = "0x182EDB8C0")]
	private static extern void get_localReferencePoint_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000746")]
	[Address(RVA = "0x2EDB9B0", Offset = "0x2ED9FB0", VA = "0x182EDB9B0")]
	private static extern float get_size_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000747")]
	[Address(RVA = "0x2EDBB50", Offset = "0x2EDA150", VA = "0x182EDBB50")]
	private static extern void set_fadeMode_Injected(IntPtr _unity_self, LODFadeMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000748")]
	[Address(RVA = "0x2EDBA70", Offset = "0x2EDA070", VA = "0x182EDBA70")]
	private static extern void set_animateCrossFading_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000749")]
	[Address(RVA = "0x2EDB720", Offset = "0x2ED9D20", VA = "0x182EDB720")]
	private static extern void RecalculateBounds_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600074A")]
	[Address(RVA = "0x2EDB660", Offset = "0x2ED9C60", VA = "0x182EDB660")]
	private static extern LOD[] GetLODs_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600074B")]
	[Address(RVA = "0x2EDB7E0", Offset = "0x2ED9DE0", VA = "0x182EDB7E0")]
	private static extern void SetLODs_Injected(IntPtr _unity_self, LOD[] lods);
}
