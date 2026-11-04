// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VolumeComponent
// Update status: CHANGED in this game update
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
[Token(Token = "0x20001F7")]
public class VolumeComponent : ScriptableObject
{
	[Token(Token = "0x20001F8")]
	public sealed class Indent : PropertyAttribute
	{
		[Token(Token = "0x4000987")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly int relativeAmount;

		[Token(Token = "0x6000EF4")]
		[Address(RVA = "0x2B5B860", Offset = "0x2B59E60", VA = "0x182B5B860")]
		public Indent(int relativeAmount = 1)
		{
		}
	}

	[Token(Token = "0x4000983")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public bool active;

	[Token(Token = "0x4000985")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal VolumeParameter[] parameterList;

	[Token(Token = "0x4000986")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ReadOnlyCollection<VolumeParameter> m_ParameterReadOnlyCollection;

	[Token(Token = "0x170001E8")]
	[Obsolete("Use DisplayInfo attribute to define a display name instead. #from(6000.3)", false)]
	public string displayName
	{
		[Token(Token = "0x6000EE6")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EE7")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170001E9")]
	public ReadOnlyCollection<VolumeParameter> parameters
	{
		[Token(Token = "0x6000EE8")]
		[Address(RVA = "0x2B66220", Offset = "0x2B64820", VA = "0x182B66220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x2B65670", Offset = "0x2B63C70", VA = "0x182B65670")]
	internal static void FindParameters(object o, List<VolumeParameter> parameters, [Optional] Func<FieldInfo, bool> filter)
	{
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x2B65BD0", Offset = "0x2B641D0", VA = "0x182B65BD0", Slot = "4")]
	protected virtual void OnEnable()
	{
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x2B65B70", Offset = "0x2B64170", VA = "0x182B65B70", Slot = "5")]
	protected virtual void OnDisable()
	{
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x2B65DB0", Offset = "0x2B643B0", VA = "0x182B65DB0", Slot = "6")]
	public virtual void Override(VolumeComponent state, float interpFactor)
	{
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x2B65F40", Offset = "0x2B64540", VA = "0x182B65F40")]
	public void SetAllOverridesTo(bool state)
	{
	}

	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x2B65F50", Offset = "0x2B64550", VA = "0x182B65F50")]
	internal void SetOverridesTo(IEnumerable<VolumeParameter> enumerable, bool state)
	{
	}

	[Token(Token = "0x6000EEF")]
	[Address(RVA = "0x2B655E0", Offset = "0x2B63BE0", VA = "0x182B655E0")]
	public bool AnyPropertiesIsOverridden()
	{
		return default(bool);
	}

	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x2B65AD0", Offset = "0x2B640D0", VA = "0x182B65AD0")]
	public int GetStateHash()
	{
		return default(int);
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x2B65B60", Offset = "0x2B64160", VA = "0x182B65B60", Slot = "7")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x2B65EC0", Offset = "0x2B644C0", VA = "0x182B65EC0")]
	public void Release()
	{
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x2B66210", Offset = "0x2B64810", VA = "0x182B66210")]
	public VolumeComponent()
	{
	}
}
