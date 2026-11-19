// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutDataAccess
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000603")]
[UnityEngine.Scripting.RequiredByNativeCode]
internal readonly struct LayoutDataAccess
{
	[Token(Token = "0x4001668")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_Manager;

	[Token(Token = "0x4001669")]
	[FieldOffset(Offset = "0x8")]
	private readonly LayoutDataStore m_Nodes;

	[Token(Token = "0x400166A")]
	[FieldOffset(Offset = "0x20")]
	private readonly LayoutDataStore m_Configs;

	[Token(Token = "0x6002C74")]
	[Address(RVA = "0x6BC4040", Offset = "0x6BC3040", VA = "0x6BC4040")]
	internal LayoutDataAccess(int manager, LayoutDataStore nodes, LayoutDataStore configs)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C75")]
	private unsafe ref T GetTypedNodeDataRef<T>(LayoutHandle handle, LayoutNodeDataType type) where T : struct
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C76")]
	private unsafe ref T GetTypedConfigDataRef<T>(LayoutHandle handle, LayoutConfigDataType type) where T : struct
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C77")]
	[Address(RVA = "0x6BC4070", Offset = "0x6BC3070", VA = "0x6BC4070")]
	public unsafe ref LayoutNodeData GetNodeData(LayoutHandle handle)
	{
		return ref *(LayoutNodeData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C78")]
	[Address(RVA = "0x6BC40D0", Offset = "0x6BC30D0", VA = "0x6BC40D0")]
	public unsafe ref LayoutStyleData GetStyleData(LayoutHandle handle)
	{
		return ref *(LayoutStyleData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C79")]
	[Address(RVA = "0x6BC4130", Offset = "0x6BC3130", VA = "0x6BC4130")]
	public unsafe ref LayoutComputedData GetComputedData(LayoutHandle handle)
	{
		return ref *(LayoutComputedData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C7A")]
	[Address(RVA = "0x6BC4190", Offset = "0x6BC3190", VA = "0x6BC4190")]
	public unsafe ref LayoutCacheData GetCacheData(LayoutHandle handle)
	{
		return ref *(LayoutCacheData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C7B")]
	[Address(RVA = "0x6BC4200", Offset = "0x6BC3200", VA = "0x6BC4200")]
	public unsafe ref LayoutConfigData GetConfigData(LayoutHandle handle)
	{
		return ref *(LayoutConfigData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C7C")]
	[Address(RVA = "0x6BC4260", Offset = "0x6BC3260", VA = "0x6BC4260")]
	public LayoutMeasureFunction GetMeasureFunction(LayoutHandle handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C7D")]
	[Address(RVA = "0x6BC42D0", Offset = "0x6BC32D0", VA = "0x6BC42D0")]
	public void SetMeasureFunction(LayoutHandle handle, LayoutMeasureFunction value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C7E")]
	[Address(RVA = "0x6BC4340", Offset = "0x6BC3340", VA = "0x6BC4340")]
	public VisualElement GetOwner(LayoutHandle handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C7F")]
	[Address(RVA = "0x6BC43B0", Offset = "0x6BC33B0", VA = "0x6BC43B0")]
	public void SetOwner(LayoutHandle handle, VisualElement value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C80")]
	[Address(RVA = "0x6BC4420", Offset = "0x6BC3420", VA = "0x6BC4420")]
	public LayoutBaselineFunction GetBaselineFunction(LayoutHandle handle)
	{
		return null;
	}
}
