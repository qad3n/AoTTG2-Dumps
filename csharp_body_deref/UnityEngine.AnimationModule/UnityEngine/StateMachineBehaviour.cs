using Il2CppDummyDll;
using UnityEngine.Animations;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000003")]
[UnityEngine.Scripting.RequiredByNativeCode]
public abstract class StateMachineBehaviour : ScriptableObject
{
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4A79EF0", Offset = "0x4A79EF0", VA = "0x4A79EF0", Slot = "4")]
	public virtual void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4A79F00", Offset = "0x4A79F00", VA = "0x4A79F00", Slot = "5")]
	public virtual void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4A79F10", Offset = "0x4A79F10", VA = "0x4A79F10", Slot = "6")]
	public virtual void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4A79F20", Offset = "0x4A79F20", VA = "0x4A79F20", Slot = "7")]
	public virtual void OnStateMove(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4A79F30", Offset = "0x4A79F30", VA = "0x4A79F30", Slot = "8")]
	public virtual void OnStateIK(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4A79F40", Offset = "0x4A79F40", VA = "0x4A79F40", Slot = "9")]
	public virtual void OnStateMachineEnter(Animator animator, int stateMachinePathHash)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4A79F50", Offset = "0x4A79F50", VA = "0x4A79F50", Slot = "10")]
	public virtual void OnStateMachineExit(Animator animator, int stateMachinePathHash)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4A79F60", Offset = "0x4A79F60", VA = "0x4A79F60", Slot = "11")]
	public virtual void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex, AnimatorControllerPlayable controller)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4A79F70", Offset = "0x4A79F70", VA = "0x4A79F70", Slot = "12")]
	public virtual void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex, AnimatorControllerPlayable controller)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4A79F80", Offset = "0x4A79F80", VA = "0x4A79F80", Slot = "13")]
	public virtual void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex, AnimatorControllerPlayable controller)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4A79F90", Offset = "0x4A79F90", VA = "0x4A79F90", Slot = "14")]
	public virtual void OnStateMove(Animator animator, AnimatorStateInfo stateInfo, int layerIndex, AnimatorControllerPlayable controller)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4A79FA0", Offset = "0x4A79FA0", VA = "0x4A79FA0", Slot = "15")]
	public virtual void OnStateIK(Animator animator, AnimatorStateInfo stateInfo, int layerIndex, AnimatorControllerPlayable controller)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4A79FB0", Offset = "0x4A79FB0", VA = "0x4A79FB0", Slot = "16")]
	public virtual void OnStateMachineEnter(Animator animator, int stateMachinePathHash, AnimatorControllerPlayable controller)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4A79FC0", Offset = "0x4A79FC0", VA = "0x4A79FC0", Slot = "17")]
	public virtual void OnStateMachineExit(Animator animator, int stateMachinePathHash, AnimatorControllerPlayable controller)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4A79FD0", Offset = "0x4A79FD0", VA = "0x4A79FD0")]
	protected StateMachineBehaviour()
	{
	}
}
