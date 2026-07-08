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
		[Address(RVA = "0x4C8E870", Offset = "0x4C8E870", VA = "0x4C8E870")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001F28")]
	[Address(RVA = "0x4C8DC70", Offset = "0x4C8DC70", VA = "0x4C8DC70")]
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
	[Address(RVA = "0x4C93A00", Offset = "0x4C93A00", VA = "0x4C93A00")]
	public unsafe ref LayoutNodeData GetNodeData(LayoutHandle handle)
	{
		return ref *(LayoutNodeData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2C")]
	[Address(RVA = "0x4C93A60", Offset = "0x4C93A60", VA = "0x4C93A60")]
	public unsafe ref LayoutStyleData GetStyleData(LayoutHandle handle)
	{
		return ref *(LayoutStyleData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2D")]
	[Address(RVA = "0x4C93AC0", Offset = "0x4C93AC0", VA = "0x4C93AC0")]
	public unsafe ref LayoutStyleBorderData GetStyleBorderData(LayoutHandle handle)
	{
		return ref *(LayoutStyleBorderData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2E")]
	[Address(RVA = "0x4C93B30", Offset = "0x4C93B30", VA = "0x4C93B30")]
	public unsafe ref LayoutStyleMarginData GetStyleMarginData(LayoutHandle handle)
	{
		return ref *(LayoutStyleMarginData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2F")]
	[Address(RVA = "0x4C93BA0", Offset = "0x4C93BA0", VA = "0x4C93BA0")]
	public unsafe ref LayoutStyleDimensionData GetStyleDimensionData(LayoutHandle handle)
	{
		return ref *(LayoutStyleDimensionData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F30")]
	[Address(RVA = "0x4C93C00", Offset = "0x4C93C00", VA = "0x4C93C00")]
	public unsafe ref LayoutComputedData GetComputedData(LayoutHandle handle)
	{
		return ref *(LayoutComputedData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F31")]
	[Address(RVA = "0x4C93C60", Offset = "0x4C93C60", VA = "0x4C93C60")]
	public unsafe ref LayoutConfigData GetConfigData(LayoutHandle handle)
	{
		return ref *(LayoutConfigData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F32")]
	[Address(RVA = "0x4C93CC0", Offset = "0x4C93CC0", VA = "0x4C93CC0")]
	public LayoutMeasureFunction GetMeasureFunction(LayoutHandle handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F33")]
	[Address(RVA = "0x4C93D30", Offset = "0x4C93D30", VA = "0x4C93D30")]
	public void SetMeasureFunction(LayoutHandle handle, LayoutMeasureFunction value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F34")]
	[Address(RVA = "0x4C93DA0", Offset = "0x4C93DA0", VA = "0x4C93DA0")]
	public VisualElement GetOwner(LayoutHandle handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F35")]
	[Address(RVA = "0x4C93E10", Offset = "0x4C93E10", VA = "0x4C93E10")]
	public void SetOwner(LayoutHandle handle, VisualElement value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F36")]
	[Address(RVA = "0x4C93E80", Offset = "0x4C93E80", VA = "0x4C93E80")]
	public LayoutBaselineFunction GetBaselineFunction(LayoutHandle handle)
	{
		return null;
	}
}
