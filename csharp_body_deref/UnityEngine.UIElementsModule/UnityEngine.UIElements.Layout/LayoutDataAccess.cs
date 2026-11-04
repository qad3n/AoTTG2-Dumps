// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutDataAccess
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x31BD440", Offset = "0x31BBA40", VA = "0x1831BD440")]
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
	[Address(RVA = "0x31BD1F0", Offset = "0x31BB7F0", VA = "0x1831BD1F0")]
	public unsafe ref LayoutNodeData GetNodeData(LayoutHandle handle)
	{
		return ref *(LayoutNodeData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C78")]
	[Address(RVA = "0x31BD2D0", Offset = "0x31BB8D0", VA = "0x1831BD2D0")]
	public unsafe ref LayoutStyleData GetStyleData(LayoutHandle handle)
	{
		return ref *(LayoutStyleData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C79")]
	[Address(RVA = "0x31BD0A0", Offset = "0x31BB6A0", VA = "0x1831BD0A0")]
	public unsafe ref LayoutComputedData GetComputedData(LayoutHandle handle)
	{
		return ref *(LayoutComputedData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C7A")]
	[Address(RVA = "0x31BD020", Offset = "0x31BB620", VA = "0x1831BD020")]
	public unsafe ref LayoutCacheData GetCacheData(LayoutHandle handle)
	{
		return ref *(LayoutCacheData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C7B")]
	[Address(RVA = "0x31BD110", Offset = "0x31BB710", VA = "0x1831BD110")]
	public unsafe ref LayoutConfigData GetConfigData(LayoutHandle handle)
	{
		return ref *(LayoutConfigData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C7C")]
	[Address(RVA = "0x31BD180", Offset = "0x31BB780", VA = "0x1831BD180")]
	public LayoutMeasureFunction GetMeasureFunction(LayoutHandle handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C7D")]
	[Address(RVA = "0x31BD340", Offset = "0x31BB940", VA = "0x1831BD340")]
	public void SetMeasureFunction(LayoutHandle handle, LayoutMeasureFunction value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C7E")]
	[Address(RVA = "0x31BD260", Offset = "0x31BB860", VA = "0x1831BD260")]
	public VisualElement GetOwner(LayoutHandle handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C7F")]
	[Address(RVA = "0x31BD3C0", Offset = "0x31BB9C0", VA = "0x1831BD3C0")]
	public void SetOwner(LayoutHandle handle, VisualElement value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C80")]
	[Address(RVA = "0x31BCFB0", Offset = "0x31BB5B0", VA = "0x1831BCFB0")]
	public LayoutBaselineFunction GetBaselineFunction(LayoutHandle handle)
	{
		return null;
	}
}
