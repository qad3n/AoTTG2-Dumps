// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VolumeComponent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001D9")]
public class VolumeComponent : ScriptableObject
{
	[Token(Token = "0x20001DA")]
	public sealed class Indent : PropertyAttribute
	{
		[Token(Token = "0x4000805")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly int relativeAmount;

		[Token(Token = "0x6000D71")]
		[Address(RVA = "0x4C07D00", Offset = "0x4C07D00", VA = "0x4C07D00")]
		public Indent(int relativeAmount = 1)
		{
		}
	}

	[Token(Token = "0x4000801")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public bool active;

	[Token(Token = "0x4000803")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal readonly List<VolumeParameter> parameterList;

	[Token(Token = "0x4000804")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ReadOnlyCollection<VolumeParameter> m_ParameterReadOnlyCollection;

	[Token(Token = "0x17000193")]
	public string displayName
	{
		[Token(Token = "0x6000D63")]
		[Address(RVA = "0x4C06780", Offset = "0x4C06780", VA = "0x4C06780")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D64")]
		[Address(RVA = "0x4C06790", Offset = "0x4C06790", VA = "0x4C06790")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000194")]
	public ReadOnlyCollection<VolumeParameter> parameters
	{
		[Token(Token = "0x6000D65")]
		[Address(RVA = "0x4C067A0", Offset = "0x4C067A0", VA = "0x4C067A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D66")]
	[Address(RVA = "0x4C06800", Offset = "0x4C06800", VA = "0x4C06800")]
	internal static void FindParameters(object o, List<VolumeParameter> parameters, [Optional] Func<FieldInfo, bool> filter)
	{
	}

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x4C06F70", Offset = "0x4C06F70", VA = "0x4C06F70", Slot = "4")]
	protected virtual void OnEnable()
	{
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x4C071E0", Offset = "0x4C071E0", VA = "0x4C071E0", Slot = "5")]
	protected virtual void OnDisable()
	{
	}

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x4C07330", Offset = "0x4C07330", VA = "0x4C07330", Slot = "6")]
	public virtual void Override(VolumeComponent state, float interpFactor)
	{
	}

	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x4C07480", Offset = "0x4C07480", VA = "0x4C07480")]
	public void SetAllOverridesTo(bool state)
	{
	}

	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x4C07490", Offset = "0x4C07490", VA = "0x4C07490")]
	internal void SetOverridesTo(IEnumerable<VolumeParameter> enumerable, bool state)
	{
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x4C07A50", Offset = "0x4C07A50", VA = "0x4C07A50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x4C07B00", Offset = "0x4C07B00", VA = "0x4C07B00")]
	public bool AnyPropertiesIsOverridden()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x4C07BA0", Offset = "0x4C07BA0", VA = "0x4C07BA0", Slot = "7")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x4C07BB0", Offset = "0x4C07BB0", VA = "0x4C07BB0")]
	public void Release()
	{
	}

	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x4C07C60", Offset = "0x4C07C60", VA = "0x4C07C60")]
	public VolumeComponent()
	{
	}
}
