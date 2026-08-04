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

[Token(Token = "0x200050C")]
[UnityEngine.Scripting.RequiredByNativeCode]
internal readonly struct LayoutDataAccess
{
	[Token(Token = "0x40010D1")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_Manager;

	[Token(Token = "0x40010D2")]
	[FieldOffset(Offset = "0x8")]
	private readonly LayoutDataStore m_Nodes;

	[Token(Token = "0x40010D3")]
	[FieldOffset(Offset = "0x18")]
	private readonly LayoutDataStore m_Configs;

	[Token(Token = "0x170007F2")]
	public bool IsValid
	{
		[Token(Token = "0x6001F27")]
		[Address(RVA = "0x4FB61A0", Offset = "0x4FB61A0", VA = "0x4FB61A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001F28")]
	[Address(RVA = "0x4FB55A0", Offset = "0x4FB55A0", VA = "0x4FB55A0")]
	internal LayoutDataAccess(int manager, LayoutDataStore nodes, LayoutDataStore configs)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F29")]
	private unsafe ref T GetTypedNodeDataRef<T>(LayoutHandle handle, LayoutNodeDataType type) where T : struct
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2A")]
	private unsafe ref T GetTypedConfigDataRef<T>(LayoutHandle handle, LayoutConfigDataType type) where T : struct
	{
		return ref *(T*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2B")]
	[Address(RVA = "0x4FBB330", Offset = "0x4FBB330", VA = "0x4FBB330")]
	public unsafe ref LayoutNodeData GetNodeData(LayoutHandle handle)
	{
		return ref *(LayoutNodeData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2C")]
	[Address(RVA = "0x4FBB390", Offset = "0x4FBB390", VA = "0x4FBB390")]
	public unsafe ref LayoutStyleData GetStyleData(LayoutHandle handle)
	{
		return ref *(LayoutStyleData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2D")]
	[Address(RVA = "0x4FBB3F0", Offset = "0x4FBB3F0", VA = "0x4FBB3F0")]
	public unsafe ref LayoutStyleBorderData GetStyleBorderData(LayoutHandle handle)
	{
		return ref *(LayoutStyleBorderData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2E")]
	[Address(RVA = "0x4FBB460", Offset = "0x4FBB460", VA = "0x4FBB460")]
	public unsafe ref LayoutStyleMarginData GetStyleMarginData(LayoutHandle handle)
	{
		return ref *(LayoutStyleMarginData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2F")]
	[Address(RVA = "0x4FBB4D0", Offset = "0x4FBB4D0", VA = "0x4FBB4D0")]
	public unsafe ref LayoutStyleDimensionData GetStyleDimensionData(LayoutHandle handle)
	{
		return ref *(LayoutStyleDimensionData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F30")]
	[Address(RVA = "0x4FBB530", Offset = "0x4FBB530", VA = "0x4FBB530")]
	public unsafe ref LayoutComputedData GetComputedData(LayoutHandle handle)
	{
		return ref *(LayoutComputedData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F31")]
	[Address(RVA = "0x4FBB590", Offset = "0x4FBB590", VA = "0x4FBB590")]
	public unsafe ref LayoutConfigData GetConfigData(LayoutHandle handle)
	{
		return ref *(LayoutConfigData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F32")]
	[Address(RVA = "0x4FBB5F0", Offset = "0x4FBB5F0", VA = "0x4FBB5F0")]
	public LayoutMeasureFunction GetMeasureFunction(LayoutHandle handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F33")]
	[Address(RVA = "0x4FBB660", Offset = "0x4FBB660", VA = "0x4FBB660")]
	public void SetMeasureFunction(LayoutHandle handle, LayoutMeasureFunction value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F34")]
	[Address(RVA = "0x4FBB6D0", Offset = "0x4FBB6D0", VA = "0x4FBB6D0")]
	public VisualElement GetOwner(LayoutHandle handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F35")]
	[Address(RVA = "0x4FBB740", Offset = "0x4FBB740", VA = "0x4FBB740")]
	public void SetOwner(LayoutHandle handle, VisualElement value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F36")]
	[Address(RVA = "0x4FBB7B0", Offset = "0x4FBB7B0", VA = "0x4FBB7B0")]
	public LayoutBaselineFunction GetBaselineFunction(LayoutHandle handle)
	{
		return null;
	}
}
